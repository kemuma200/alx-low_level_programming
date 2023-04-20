#include "main.h"
#include "stdlib.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr:pointer to the memory previously allocated
 *@old_size:size, in bytes, of the allocated space for ptr
 *@new_size:new size, in bytes of the new memory block
 *Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
		break;
	else if (new_size == old_size)
		return (p);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
		p = malloc(new_size);

}
