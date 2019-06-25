#include <SPI.h>
#include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>
#include "Animator.h"


// SPI definitions for the display module
#define OLED_MOSI   9 //SDA on the Board
#define OLED_CLK   10 //SCL on the Board
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13

Adafruit_SSD1306 * display;

void setup() {
  // initialize the display
  display = new Adafruit_SSD1306(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
  display->begin(SSD1306_SWITCHCAPVCC);
  Animator * global_animator = new Animator(display);



}

void loop() {
  // 1. Read in the Analog input

  // 2. Package and transmit data

  // 3. Read incoming transmission

  // 4. Write to display
}
