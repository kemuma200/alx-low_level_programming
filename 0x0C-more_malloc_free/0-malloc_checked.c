#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *@b: parameter that needs to eb stored
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p != NULL)
		return (p);
	exit(98);

}
