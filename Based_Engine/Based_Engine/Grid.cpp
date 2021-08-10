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
			n = 20 * perlin->noise(i, k, 0.8);
			n = n - floor(n);
			grid[i][k] = n;
		}
	}

}
