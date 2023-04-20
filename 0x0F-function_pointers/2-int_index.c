#include "function_pointers.h"
#include "stdio.h"

/**
 *int_index -searches for an integer
 *@array:array considered
 *@size: sieze of the array
 *@cmp: function pointer
 *Return:index of the first element or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size = 0 || cmp == NULL || array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if ((*cmp) (array[i]))
			return (i);
	}
	return (-1);
  
}
