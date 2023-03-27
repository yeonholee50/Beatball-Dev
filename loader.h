
#define LOADER_H

#define BASEHEIGHT (1)
#define BASEWIDTH (40)
#define NBUTTONS (10)

/**
 * Defines ball structure
 */
struct ball {
	int row;
	int col;
	int rd;
	int cd;
	unsigned short color;
};

/**
 * Defines base structure
 */
struct base {
	int row;
	int col;
	int cd; //only cd because base can only move horizontally
	unsigned short color;
};

/**
 * Defines multiple state of balls
 */
struct state {
	struct ball balls;
	int size;
};

/**
 *Defines multiple state of bases
 */
struct baseState {
	struct base bases;
	int rowDim;
	int colDim;
};

/**
 * Delays for some time
 */
void delay(int);

/**
 * Clears background to specifid color
 */
void clearBG(unsigned short);



