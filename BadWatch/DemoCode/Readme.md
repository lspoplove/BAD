Libraris need to be installed first

Adafruit GFX
https://github.com/adafruit/Adafruit-GFX-Library

Adafruit NeoPixel
https://github.com/adafruit/Adafruit_NeoPixel

Adafruit SH1106
https://github.com/wonho-maker/Adafruit_SH1106

VL53L0X in this code
https://github.com/lspoplove/Watch/tree/master/BadWatch/DemoCode/DistanceTest

Or You can try Adafruit VL53L0X
https://github.com/adafruit/Adafruit_VL53L0X

Adafruit RTC lib
https://github.com/adafruit/RTClib



1.Demo is the pre-flashed program of BadWatch.

2.When you find time is not correct , you can flash demo code again.

3.If you do not use power keep code, watch may be turn off automaticly after 30 seconds.

4.BadUSB code can only be put in setup() field, if you put it in loop() watch will 
not be recognized with computer and you have to flash bootloader again.
