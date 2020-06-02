#include <timer.h>
auto timer = timer_create_default();
void setup() {
 
 timer.every(9500, keypower);
}

void loop() {
  timer.tick();
}
void keypower(){
  pinMode(11,OUTPUT);
  digitalWrite(11,LOW);
  delay(500);
  pinMode(11,INPUT);
}
