#include <Wire.h>
#include <VL53L0X.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);
VL53L0X sensor;

void setup() {
  Wire.begin();
  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); 

}

void loop() {
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print(sensor.readRangeContinuousMillimeters());
  display.println("MM");
  display.display();
  delay(500);
}
