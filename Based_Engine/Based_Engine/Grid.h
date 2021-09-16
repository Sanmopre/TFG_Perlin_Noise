#ifndef __GRID_H__
#define __GRID_H__

#include "Globals.h"

class Grid
{
public:

	Grid();
public:
	void SetGridRandomHeight();

	float grid[SIZE_OF_GRID][SIZE_OF_GRID];


	double ioffset = 0;
	double koffset = 0;
	double noiseSize = 0.01;

	double lowThreshhold = 20;
	double highThreshhold = 1000;

	int multiplierFactor = 200;


private:

};

#endif //__GRID_H__