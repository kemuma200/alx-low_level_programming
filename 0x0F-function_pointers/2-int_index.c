#include "function_pointers.h"

/**
 *
 *
 *
 */
bool cmp(const void *a, const void *b)
{
	return ( *(int *)a == *(int *)b );
}

/**
 *
 *
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
  
}
