#include "stdio.h"
#include <stdlib.h>

/**
 *array_range -  created should contain all the values from min to max
 *@min: minimum digit
 *@max: maximum digit
 *Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int k, j;

	if (min > max)
		return (NULL);

	k = max - min;
	p = malloc(sizeof(int) * (k + 1));
	if (p == NULL)
		return (NULL);

	for (j = 0; j <= k; j++)
		p[j] = min++;
	return (p);

}
