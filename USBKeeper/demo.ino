#include <Keyboard.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <Adafruit_SH1106.h>
#include <Adafruit_GFX.h>

#define OLED_RESET 3 //unused
Adafruit_SH1106 display(OLED_RESET);

#define btnUp   10
#define btnOk   9
#define btnDown 8

boolean statusBtnUp   = false;
boolean statusBtnOk   = false;
boolean statusBtnDown = false;

boolean statusIfBtnUp   = false;
boolean statusIfBtnOk   = false;
boolean statusIfBtnDown = false;

boolean UP   = false;
boolean OK   = false;
boolean DOWN = false;

int dstike  = 1;
int menuItem = 1;

Sd2Card card;
SdVolume volume;

const int chipSelect = 4;

void setup() {
  Keyboard.begin();
  delay(1000);

  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.clearDisplay();
  
  pinMode(btnUp,   INPUT_PULLUP);
  pinMode(btnOk,   INPUT_PULLUP);
  pinMode(btnDown, INPUT_PULLUP);

}
void loop() {
  menulist();

  statusBtnUp   = digitalRead(btnUp);
  statusBtnOk   = digitalRead(btnOk);
  statusBtnDown = digitalRead(btnDown);
  
  upJudge();
  okJudge();
  downJudge();

  //   button up
  if (UP && dstike == 1) {
    UP = false;
    menuItem --;
    if (menuItem < 1)menuItem = 4;
  }
  // button down
  if (DOWN && dstike == 1) {
    DOWN = false;
    menuItem ++;
    if (menuItem > 4)menuItem = 1;
  }

  //   button ok
  if (OK) {
    OK = false;
    if (dstike == 1 && menuItem == 1) {
      dstike = 2;
    } else if (dstike == 1 && menuItem == 2) {
      dstike = 3;
    } else if (dstike == 1 && menuItem == 3) {
      dstike = 4;
    } else if (dstike == 1 && menuItem == 4) {
      dstike = 5;
    }
  }

  delay(50);
}

//--------------------------------------------------------------------------------
void upJudge() {
  if (statusBtnUp != statusIfBtnUp) {
    if (statusBtnUp == 0) {
      UP = true;
    }
    delay(50);
  }
  statusIfBtnUp = statusBtnUp;
}

void okJudge() {
  if (statusBtnOk != statusIfBtnOk) {
    if (statusBtnOk == 0) {
      OK = true;
    }
    delay(50);
  }
  statusIfBtnOk = statusBtnOk;
}

void downJudge() {
  if (statusBtnDown != statusIfBtnDown) {
    if (statusBtnDown == 0) {
      DOWN = true;
    }
    delay(50);
  }
  statusIfBtnDown = statusBtnDown;
}

//Menu list
void menulist() {
  if (dstike == 1) {
    display.clearDisplay();
    display.setCursor(30, 0);
    display.print("COMMAND");

    if (menuItem == 1) {
      display.setCursor(5, 17);
      display.print("> Run NotePad");
    } else {
      display.setCursor(5, 17);
      display.print("  Run NotePad");
    }

    if (menuItem == 2) {
      display.setCursor(5, 27);
      display.print("> Run Clean PC");
    } else {
      display.setCursor(5, 27);
      display.print("  Run Clean PC");
    }

    if (menuItem == 3) {
      display.setCursor(5, 37);
      display.print("> Run Music");
    } else {
      display.setCursor(5, 37);
      display.print("  Run Music");
    }

    if (menuItem == 4) {
      display.setCursor(5, 47);
      display.print("> SD Card");
    } else {
      display.setCursor(5, 47);
      display.print("  SD Card");
    }

  } else if (dstike == 2) {
    notepad();
    dstike = 1;
    
  } else if (dstike == 3) {
    cmd();
    dstike = 1;
  } else if (dstike == 4) {
    website();
    dstike = 1;
  } else if (dstike == 5) {
    cardinfo();
    if(digitalRead(btnOk)== false||digitalRead(btnUp)== false||digitalRead(btnDown)== false){
    dstike = 1;
    }
  }
  display.display();
}
void notepad(){
  winR();
  Keyboard.println("notepad ");
  delay(500);
  Keyboard.println("here you can record your password");
  delay(500);

}
void cmd(){
  winR();
  Keyboard.println("cmd ");
  delay(500);
  Keyboard.println("cleanmgr");
  delay(500);
}

void website(){
  winR();
  Keyboard.println("cmd ");
  delay(1000);
  Keyboard.println("start https://youtu.be/3DIID64lKek");
  delay(500);
}
void winR(){
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(50); 
}
void cardinfo(){
    display.clearDisplay();
    display.setCursor(0, 0);
    card.init(SPI_HALF_SPEED, chipSelect);
    volume.init(card);
    uint32_t volumesize;
    display.print("Volume type is:FAT");
    display.println(volume.fatType(), DEC);
    volumesize = volume.blocksPerCluster();    // clusters are collections of blocks
    volumesize *= volume.clusterCount();       // we'll have a lot of clusters
    volumesize /= 2;  
    display.println("Volume size (Mb):  ");
    volumesize /= 1024;
    display.println(volumesize);
}
