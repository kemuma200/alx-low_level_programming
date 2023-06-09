#include "main.h"
#include <stdlib.h>

/**
 *_realloc-reallocates a memory block using malloc and free
 *@ptr:  pointer to the memory previously allocated
 *@old_size:size, in bytes, of the allocated space for ptr
 *@new_size:new size, in bytes of the new memory block
 *Return: pointer to the newly created block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = old_p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old_p[i];
	}
	free(ptr);
	return (p);
}
