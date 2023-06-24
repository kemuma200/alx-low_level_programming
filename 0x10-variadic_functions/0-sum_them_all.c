#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of elements
 *
 *Return: sum. else 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, summ = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		summ += va_arg(args, int);

	va_end(args);
	return (summ);
}
