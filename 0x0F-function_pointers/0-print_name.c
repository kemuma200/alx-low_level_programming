#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name:string to be printed
 *@f:pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		(f)(name);
}
