#define BUZZER 12
void setup() {
  pinMode(BUZZER,OUTPUT);
}

void loop() {
  soundone();
  delay(1000);
  soundtwo();
  delay(1000);
}
void soundone(){
    unsigned char i,j;

  for(i=0;i<5;i++)

  {

    for(i=0;i<200;i++)

    {

      digitalWrite(BUZZER,HIGH);

      delay(1);//Change this could adjust voice

      digitalWrite(BUZZER,LOW);

      delay(1);

    }

    for(i=0;i<100;i++)

    {
      digitalWrite(BUZZER,HIGH);

      delay(2);

      digitalWrite(BUZZER,LOW);

      delay(2);
    }
  }

}
void soundtwo(){
    unsigned char i,j;

  for(i=0;i<5;i++)

  {

    for(i=0;i<100;i++)

    {

      digitalWrite(BUZZER,HIGH);

      delay(2);//Change this could adjust voice

      digitalWrite(BUZZER,LOW);

      delay(2);

    }

    for(i=0;i<200;i++)

    {
      digitalWrite(BUZZER,HIGH);

      delay(1);

      digitalWrite(BUZZER,LOW);

      delay(1);
    }
  }

}
