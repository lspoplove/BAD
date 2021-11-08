#include <Keyboard.h>


#define btnUp   9 
#define btnDown 10

void setup() {
  Keyboard.begin();
  delay(1000);
  pinMode(btnUp,   INPUT_PULLUP);
  pinMode(btnDown, INPUT_PULLUP);
}
void loop() {

if(digitalRead(btnUp)== false){
  cmd();
}
if(digitalRead(btnDown)== false){
  notepad();
}

  delay(50);
}



void cmd(){
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(1000);
  Keyboard.println("cmd ");
  delay(500);
  Keyboard.println("help");
}
void notepad(){
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500);
  Keyboard.println("notepad ");
  delay(500);
  Keyboard.println("Welcome to https://github.com/SpacehuhnTech/esp8266_deauther");

  
}
