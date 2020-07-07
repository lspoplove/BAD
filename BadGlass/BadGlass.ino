#include <Keyboard.h>
#define BUTTON_PRESS   9
#define BUTTON_LEFT    10
#define BUTTON_RIGHT   8
#define LEDA  1
#define LEDB  0
#define LEDC  2
#define LEDD  3
#define LASER  7
int val = 0;
int old_val = 0;
int state = 0;
int ledcount = 0;
void setup() {
  badUSB();
  pinMode(BUTTON_PRESS, INPUT_PULLUP);
  pinMode(BUTTON_LEFT, INPUT_PULLUP);
  pinMode(BUTTON_RIGHT, INPUT_PULLUP);
  pinMode(LASER, OUTPUT);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
}

void loop() {
  val = digitalRead(BUTTON_PRESS);
  if ((val == LOW) && (old_val == HIGH))
  {
    state = 1 - state;
    delay(300);
  }
  old_val = val;
  if (state == 1)
  {
    digitalWrite(LASER, HIGH);
  }
  else {
    digitalWrite(LASER, LOW);
  }
  if (digitalRead(BUTTON_LEFT) == LOW)
  {
    digitalWrite(LEDA, LOW);
    digitalWrite(LEDB, LOW);
    digitalWrite(LEDC, LOW);
    digitalWrite(LEDD, LOW);
  }
  if (digitalRead(BUTTON_RIGHT) == LOW)
  {
    digitalWrite(LEDA, HIGH);
    digitalWrite(LEDB, HIGH);
    digitalWrite(LEDC, HIGH);
    digitalWrite(LEDD, HIGH);
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
  Keyboard.print("netsh wlan show profiles");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);

  
  Keyboard.print("start chrome.exe www.dstike.com");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
/*
  Keyboard.print("notepad");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.print("Hello, DSTIKE");
  delay(500);
*/
  Keyboard.end();
  delay(500); 
}
