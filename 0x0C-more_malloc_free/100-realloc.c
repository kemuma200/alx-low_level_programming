#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr:pointer to the memory previously allocated
 *@old_size:size, in bytes, of the allocated space for ptr
 *@new_size:new size, in bytes of the new memory block
 *Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p, *old_p;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		new_p = malloc(new_size);
	old_p = ptr;
	if (new_p > old_p)
	{
		for (i = 0; i < old_size; i++)
			new_p[i] = old_p[i];
	}
	if (new_p < old_p)
	{
		for (i = 0; i < new_size; i++)
			new_p[i] = old_p[i];
	}
	free(ptr);
	return (new_p);

}
