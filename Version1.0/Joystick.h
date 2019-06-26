#pragma once
#include "Arduino.h"

class Joystick {
private:
  int vertical_value;
  int horizontal_value;
  int analogpin_vert;
  int analogpin_horiz;
public:
  Joystick(int analogpin_vert, int analogpin_horiz);
  void readValues();
  void calibrate();
};
