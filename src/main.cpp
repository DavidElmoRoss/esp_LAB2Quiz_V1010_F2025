/*
When you BUILD and UPLOAD then RUN this code in PLATFORMIO,
HELLO WORLD is centred on the screen in _________ letters
on a __________ Background.
*/


#include "arduino.h"

void setup()
{
  Serial.begin(9600);
}
void loop()
{
    printf("\e[1;1H\e[2J");
    printf("\e[2;32;44m");  
    fflush(stdout);
    printf("\e[12;35H");
    printf("Hello World");
    fflush(stdout);
    for(;;);
}
