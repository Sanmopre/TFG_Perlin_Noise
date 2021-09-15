#include "Grid.h"
#include "PerlinNoise.h"

Grid::Grid()
{
	SetGridRandomHeight();

}

void Grid::SetGridRandomHeight()
{	
	PerlinNoise* perlin = new PerlinNoise();

	for(int i = 0; i < SIZE_OF_GRID; i++)
	{
		for(int k = 0; k < SIZE_OF_GRID; k++)
		{
			float n;
			n = 20 * perlin->noise(ioffset, koffset,0);
			grid[i][k] = n;
			koffset += 0.1;
		}
		ioffset += 0.1;
	}

}
