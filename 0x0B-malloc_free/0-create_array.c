#include "main.h"
#include "stddef.h"
#include "stdlib.h"
/**
 *create_array - creates an array of chars, and
 *		initializes it with a specific char.
 *@size: size of the array
 *@c: character to print
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	j = calloc(size, sizeof(char));

	if (j == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(j + i) = c;
		}
	}
	return (j);
}
