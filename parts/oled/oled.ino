#include<U8g2lib.h>
#include "util.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C display(U8G2_R0, U8X8_PIN_NONE);

void setup() {
  // put your setup code here, to run once:
  display.begin();
  display.firstPage();
  do {
    display.drawXBMP(0,0,acrobot_width,acrobot_height,acrobot_bits);
  } while(display.nextPage());
}

void loop() {
  // put your main code here, to run repeatedly:

}
