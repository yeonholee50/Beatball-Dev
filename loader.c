#include "loader.h"
#include "gba.h"

/**
 * Creates a time delay
 *
 * @param n how log to delay
 */
void delay(int n) {
	volatile int x = 0;
	for (int i = 0; i < n * 1000; i++) {
		x++;
	}
}

/**
 * Makes the entire background into specified background color for GameBoy
 *
 * @param bgcolor
 */
void clearBG(unsigned short bgcolor) {
	drawRectDMA(0, 0, WIDTH, HEIGHT, bgcolor);
}	
