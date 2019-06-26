#include "Joystick.h"

Joystick::Joystick(int analogpin_vert, int analogpin_horiz){
  this->analogpin_vert = analogpin_vert;
  this->analogpin_horiz = analogpin_horiz;
  calibrate();
}

void Joystick::readValues(){
  //TODO this is going to need a bit more work. probably involving some sort of mapping...?
  vertical_value = analogRead(analogpin_vert);
  horizontal_value = analogRead(analogpin_horiz);
}

void Joystick::calibrate(){
  vertical_value = 0;
  horizontal_value = 0;
}
