#include "main.h"

/**
 *alloc_grid - function that returns a pointer
 *	to a 2 dimensional array of integers
 *@width:width of the grid
 *@height:length of teh grid
 *Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int**)calloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int**)calloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (p)
}
