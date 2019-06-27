#pragma once
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Arduino.h"

class Joystick {
private:

  int analogpin_vert;
  int analogpin_horiz;

public:
  int vertical_value;
  int horizontal_value;
  int maxVert;
  int minVert;
  int maxHoriz;
  int minHoriz;

  Joystick(int analogpin_vert, int analogpin_horiz);
  void readValues();
  void calibrate(Adafruit_SSD1306 * display, String strg);
  int getVerticalValue();
  int getHorizontalValue();
};
