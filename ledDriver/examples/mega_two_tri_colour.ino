//Basic Example of two tri-colour leds on a mega
//Licensed under MIT, See the LICENCE file. 
//Cal.W 2020

#include "ledDriver.h"

#define LPINR_1 22
#define LPING_1 24
#define LPINB_1 26

#define LPINR_2 23
#define LPING_2 25
#define LPINB_2 27

ColourLED cLED1(LPINR_1, LPING_1, LPINB_1);
ColourLED cLED2(LPINR_2, LPING_2, LPINB_2);

void setup(){
    cLED1.setColour(CYAN);
    cLED2.setColour(GREEN);
    delay(500);
    cLED1.setColour(WHITE);
    cLED2.setColour(BLUE);
    delay(500);
    cLED1.setColour(GREEN);
    cLED2.setColour(RED);  
    delay(500);
    cLED1.setColour(RED);
    cLED2.setColour(MAGENTA);
    delay(500);
    cLED1.setColour(YELLOW);
    cLED2.setColour(CYAN);
    delay(500);
    cLED1.setColour(BLACK);
    cLED2.setColour(BLACK);
}

void loop(){}