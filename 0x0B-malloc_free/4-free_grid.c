#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *free_grid -  frees a 2 dimensional grid
 *@grid: grid to be freed
 *@height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid);
}
