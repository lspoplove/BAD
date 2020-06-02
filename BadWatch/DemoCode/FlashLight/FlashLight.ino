#define FLASHLIGHT 5
void setup() {
  pinMode(FLASHLIGHT,OUTPUT);
}

void loop() {
  digitalWrite(FLASHLIGHT,HIGH);
  delay(1000);
  digitalWrite(FLASHLIGHT,LOW);
  delay(1000);
}
