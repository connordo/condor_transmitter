#include <SPI.h>
#include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>
#include "Animator.h"
#include "Joystick.h"


// SPI definitions for the display module
#define OLED_MOSI   9 //SDA on the Board
#define OLED_CLK   10 //SCL on the Board
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13

Adafruit_SSD1306 * display;
Joystick * leftStick;
Joystick * rightStick;
Animator * global_animator;
void setup() {
  // initialize the display
  display = new Adafruit_SSD1306(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
  display->begin(SSD1306_SWITCHCAPVCC);
  display->clearDisplay();
  display->display();

  global_animator = new Animator(display);
  global_animator->openingAnimation();
  // global_animator->homeScreen_init();

  // initialize the sticks
  leftStick = new Joystick(0, 1);
  rightStick = new Joystick(2, 3);

  // calibrate the joysticks
  leftStick->calibrate(display, "Left Stick");
  rightStick->calibrate(display, "Right Stick");
  global_animator->homeScreen_init();


}

void loop() {
  // 1. Read in the Analog input
  leftStick->readValues();
  // 2. Package and transmit data

  // 3. Read incoming transmission

  // 4. Write to display
  int lx = leftStick->horizontal_value;
  int ly = leftStick->vertical_value;
  int rx = 320;
  int ry = 320;
  // global_animator->DrawDigitalSticks(leftStick->getVerticalValue, leftStick->getHorizontalValue, 0, 0);
  global_animator->DrawDigitalSticks(ly, lx, ry, ry);
}
