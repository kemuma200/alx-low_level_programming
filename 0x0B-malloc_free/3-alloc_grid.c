#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *alloc_grid - allocates memory to a dimensional array of integers
 *@width: width of array
 *@height:length of array
 *Return: a pointer to a 2 dimensional array of integers or null
 *
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);
		if (s[x] == NULL)
		{
			while (x >= 0)
			{
				free(s[x]);
				x--;
			}

			free(s);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			s[x][y] = 0;

	}
	return (s);
}
