#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars and initializes it with a character
 *@size: size of array
 *@c: character
 *Return: pointer to the array or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *s;

	if (size <= 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		s[k] = c;

	s[k] = '\0';

	return (s);
}
