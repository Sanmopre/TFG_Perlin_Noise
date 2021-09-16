#include "Grid.h"
#include "PerlinNoise.h"

Grid::Grid()
{
	SetGridRandomHeight(0);
}

void Grid::SetGridRandomHeight(unsigned int seed)
{	
	PerlinNoise* perlin = new PerlinNoise(seed);

	double maxNoiseHeight = -100;
	double minNoiseHeight = 100;

	for(float i = 0; i < SIZE_OF_GRID; i++)
	{
		for(float k = 0; k < SIZE_OF_GRID; k++)
		{

			float amplitude = 1;
			float frequency = 1;
			float noiseHeight = 0;


			for(int s = 0; s < octaves; s++)
			{
			koffset = k / noiseSize * frequency;
			ioffset = i / noiseSize * frequency;

			float n;
			n = perlin->noise(koffset, ioffset, 0) * 2 -1;
	
			noiseHeight += n * amplitude;  
			amplitude *= persistance;
			frequency *= lacunarity;
			}

			if(noiseHeight > maxNoiseHeight)
			{
				maxNoiseHeight = noiseHeight;
			} else if (noiseHeight < minNoiseHeight)
			{
				minNoiseHeight = noiseHeight;
			}

			grid[(int)i][(int)k] = noiseHeight * multiplierFactor;
		}
	}


	//normalize matrix 
	/*
	for (int i = 0; i < SIZE_OF_GRID; i++)
	{
		for (int k = 0; k < SIZE_OF_GRID; k++) 
		{
			//grid[i][k] = minNoiseHeight + grid[i][k] * (maxNoiseHeight - minNoiseHeight);
		}
	}
	*/
}
