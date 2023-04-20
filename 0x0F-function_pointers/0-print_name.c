#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints a name
 *@name: name considered
 *@f: function pointer
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
