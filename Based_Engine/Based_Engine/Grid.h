#ifndef __GRID_H__
#define __GRID_H__

#include "Globals.h"

class Grid
{
public:

	Grid();

	void SetGridRandomHeight();

	float grid[SIZE_OF_GRID][SIZE_OF_GRID];

private:
	double ioffset = 0;
	double koffset = 0;
	float maxHeight = 4;
};

#endif //__GRID_H__