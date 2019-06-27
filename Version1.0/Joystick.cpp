#include "Joystick.h"

Joystick::Joystick(int vert_pin, int horiz_pin){
  analogpin_vert = vert_pin;
  analogpin_horiz = horiz_pin;
  readValues();

}

void Joystick::readValues(){
  vertical_value = map(analogRead(analogpin_vert), minVert, maxVert,-10,10);
  horizontal_value = map(analogRead(analogpin_horiz), minVert, maxVert,-10,10);
  
}

void Joystick::calibrate(Adafruit_SSD1306 * display, String dispMessage){
  display->clearDisplay();
  display->setTextSize(1);
  display->setCursor(3,3);
  display->setTextColor(WHITE);
  display->println(dispMessage);
  display->display();
  int px = 0;

  for(int i = 0; i < 1028; i++){
    // Serial.println(i);
    int tempVert = analogRead(analogpin_vert);
    int tempHoriz = analogRead(analogpin_horiz);

    if(tempVert > maxVert) maxVert = tempVert;
    if(tempVert < minVert) minVert = tempVert;

    if(i%8==0){
      display->drawPixel(px++, 60, WHITE);
      display->display();
    }
  }
  display->clearDisplay();
  display->display();
}

int Joystick::getVerticalValue(){
  return vertical_value;
}

int Joystick::getHorizontalValue(){
  return horizontal_value;
}
