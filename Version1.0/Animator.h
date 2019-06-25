#pragma once

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Animator {

  private:
    static const unsigned char PROGMEM condor1[];
    static const unsigned char PROGMEM condor2[];
    static const unsigned char PROGMEM condor3[];
    static const unsigned char PROGMEM condor4[];
    static const unsigned char PROGMEM condor5[];
    static const unsigned char PROGMEM condor6[];
    static const unsigned char PROGMEM condor7[];
    static const unsigned char PROGMEM condor8[];
    static const unsigned char PROGMEM condor9[];
    static const unsigned char PROGMEM condor10[];
    static const unsigned char PROGMEM condor11[];
    static const unsigned char PROGMEM condor12[];
    static const unsigned char PROGMEM condor13[];
    static const unsigned char PROGMEM condor14[];
    static const unsigned char PROGMEM condor15[];
    static const unsigned char PROGMEM condor16[];
    static const unsigned char PROGMEM condor17[];

    Adafruit_SSD1306 * screen;

    int lstick_x;
    int lstick_y;
    int rstick_x;
    int rstick_y;
  public:
    Animator(Adafruit_SSD1306 * display);
    void openingAnimation();
    void homeScreen_init();
    void DrawBattery(int charge);

};
