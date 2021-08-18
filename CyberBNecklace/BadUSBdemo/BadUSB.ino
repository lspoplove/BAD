#include <Keyboard.h>
void setup() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(1000);
  Keyboard.println("cmd ");
  delay(500);
  Keyboard.println("start WWW.DSTIKE.COM ");
  Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}
