#include "function_pointers.h"
#include <stdbool.h>

/**
 *cmp - searches an integer array for a value
 *@a: first value
 *@b: second value
 *Return: true if present, false of not
 */
bool cmp(const void *a, const void *b)
{
	return (*(int *)a == *(int *)b);
}

/**
 *int_index - searches for an integer
 *@array: array to eb searched
 *@size: size of the array
 *@cmp: comparison function
 *Return: index of element, else  -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (c = 0; c < size; c++)
	{
		if ((cmp)(array[c]))
			return (c);
	}
	return (-1);
}
