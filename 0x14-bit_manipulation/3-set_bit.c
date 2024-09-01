#include "main.h"

/**
 *set_bit - function that sets the value of
 *a bit to 1 at a given index
 *@n: number
 *@index: index
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*k = (*n | k);

	return (1);
}
