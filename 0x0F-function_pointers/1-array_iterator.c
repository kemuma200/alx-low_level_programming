#include "function_pointers.h"

/**
 *array_iterator - calls a function for each element in an array
 *@array: array to be considered
 *@size: len of array
 *@action: function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || size == 0)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);

}
