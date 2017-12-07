/* blink.c
 *    D. Thiebaut
 *       taken from https://www.raspberrypi.org/forums/viewtopic.php?f=33&t=23090
 *          blinks Physical Pin 7 On and Off, 10 times.
 *
 *             to compile and run:
 *                gcc -o blink blink.c -lwiringPi
 *                   sudo ./blink
 *                   */

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	int pin1 = 1;
	int pin2 = 4;

	printf("Raspberry Pi wiringPi blink test\n");

	if (wiringPiSetup() == -1) 
	{
		printf( "Setup didn't work... Aborting." );
		exit (1);
	}

	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);

	int i;
	for ( i=0; i<5; i++ ) 
	{
		digitalWrite(pin2, 1);    
		digitalWrite(pin1, 0);
		delay(500);

		digitalWrite(pin2, 0);
		digitalWrite(pin1, 1);
		delay(2000);
	}

	digitalWrite( pin1, 0 );
	digitalWrite( pin2, 0 );

      	return 0;
}
