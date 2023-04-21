#include "function_pointers.h"
#include "stdio.h"

/**
 *array_iterator - executes a function given as a parameter
 *	on each element of an array
 *@array: array considered
 *@size: size of teh array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
