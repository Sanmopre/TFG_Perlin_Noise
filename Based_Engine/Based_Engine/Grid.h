#ifndef __GRID_H__
#define __GRID_H__

#include "Globals.h"

class Grid
{
public:

	Grid();
public:
	void SetGridRandomHeight(unsigned int seed);

	float grid[SIZE_OF_GRID][SIZE_OF_GRID];


	double ioffset = 0;
	double koffset = 0;
	double noiseSize = 100;

	double lowThreshhold = 0;
	double highThreshhold = 1000;

	int multiplierFactor = 30;

	int octaves = 4;
	float persistance = 0.5;
	float lacunarity = 2;

	unsigned int seed = 500;


private:

};

#endif //__GRID_H__