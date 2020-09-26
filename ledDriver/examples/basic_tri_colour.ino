//Basic demonstration of a tri-colour led on pins 7,8,9
//Licensed under MIT, See the LICENCE file. 
//Cal.W 2020

#include "ledDriver.h"

#define LPIN_R 7
#define LPIN_G 8
#define LPIN_B 9

ColourLED cLED1(LPIN_R, LPIN_G, LPIN_B);

void setup(){
    cLED1.setColour(CYAN);
    delay(500);
    cLED1.setColour(WHITE);
    delay(500);
    cLED1.setColour(GREEN);
    delay(500);
    cLED1.setColour(RED);
    delay(500);
    cLED1.setColour(YELLOW);
    delay(500);
    cLED1.setColour(BLACK);
}

void loop(){}