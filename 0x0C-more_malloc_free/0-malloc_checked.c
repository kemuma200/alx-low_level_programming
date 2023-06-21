#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *@b: integer considered
 *Return: pointer to allocated memory, else 98
 *
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
