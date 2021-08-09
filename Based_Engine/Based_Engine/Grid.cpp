#include "Grid.h"

Grid::Grid()
{
	SetGridRandomHeight();
}

void Grid::SetGridRandomHeight()
{
	for(int i = 0; i < SIZE_OF_GRID; i++)
	{
		for(int k = 0; k < SIZE_OF_GRID; k++)
		{
			grid[i][k] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / maxHeight));;
		}
	}

}
