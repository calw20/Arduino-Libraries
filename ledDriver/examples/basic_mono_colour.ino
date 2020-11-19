//Basic demonstration of a tri-colour led on pins 7,8,9
//Licensed under MIT, See the LICENCE file. 
//Cal.W 2020

#include "ledDriver.h"

#define LPIN_R 7
#define LPIN_G 8
#define LPIN_B 9

LED rLED(LPIN_R, RED);
LED bLED(LPIN_B, BLUE);
LED gLED(LPIN_g, GREEN);

void setup(){
    //White
    rLED.setColour(WHITE);
    gLED.setColour(WHITE);
    bLED.setColour(WHITE);
    delay(500);
    //Green - Only the Green LED will enable
    rLED.setColour(GREEN);
    gLED.setColour(GREEN);
    bLED.setColour(GREEN);
    delay(500);
    //Cyan - Red will be off
    rLED.setColour(CYAN);
    gLED.setColour(CYAN);
    bLED.setColour(CYAN);
    delay(500);
    //Off
    rLED.setColour(BLACK);
    gLED.setColour(BLACK);
    bLED.setColour(BLACK);

}

void loop(){}