
/*
This code will cause a TekBot connected to the AVR board to
move forward and when it touches an obstacle, it will reverse
and turn away from the obstacle and resume forward motion.

PORT MAP
Port B, Pin 5 -> Output -> Right Motor Enable
Port B, Pin 4 -> Output -> Right Motor Direction
Port B, Pin 6 -> Output -> Left Motor Enable
Port B, Pin 7 -> Output -> Left Motor Direction
Port D, Pin 5 -> Input -> Left Whisker
Port D, Pin 4 -> Input -> Right Whisker
*/

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

#define MovFwd  0b10010000  // Move Forward
#define MovBck  0b00000000  // Move Backward
#define TurnR   0b10000000  // Turn Right
#define TurnL   0b00010000  // Turn Left

int main(void)
{

while (1) // loop forever
      {
	      // Your code goes here
      }
}
