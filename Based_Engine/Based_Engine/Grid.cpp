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
			n = perlin->noise(koffset, ioffset, 0)* multiplierFactor;

			if (lowThreshhold > n)
				n = lowThreshhold;

			if (highThreshhold < n)
				n = highThreshhold;
			

			grid[i][k] = n;

			koffset += noiseSize;
		}
		koffset = 0;
		ioffset += noiseSize;
	}

}
