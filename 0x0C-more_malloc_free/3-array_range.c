#include "main.h"
#include "stdlib.h"

/**
 *array_range - creates an array of integers
 *@max: largest integer
 *@min: smallest integer
 *Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i, j, arrLen;
	int *p;

	if (min > max)
		return (NULL);
	arrLen = max - min + 1;

	p = malloc(sizeof(int) * arrLen);
	if (p == NULL)
		return (NULL);

	for (i = min, j = 0; i < (max + 1); i++, j++)
	{
		p[j] = i;
	}
	return (p);
}
