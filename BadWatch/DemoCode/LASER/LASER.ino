#define LASER 13
#define BUTTON_UP 10
#define BUTTON_CENTER 9
#define BUTTON_DOWN 8
void setup() {
  pinMode(LASER,OUTPUT);
  pinMode(BUTTON_UP,INPUT_PULLUP);
  pinMode(BUTTON_CENTER,INPUT_PULLUP);
  pinMode(BUTTON_DOWN,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(BUTTON_UP)==LOW){
    digitalWrite(LASER,HIGH);
  }
    if(digitalRead(BUTTON_DOWN)==LOW){
    digitalWrite(LASER,LOW);
  }
}
