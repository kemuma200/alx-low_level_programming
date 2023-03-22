#include "main.h"
#include <stdio.h>
/**
 * print_sign - Prints the sign of a digit
 *
 *@n: Integere under consideration
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
}
