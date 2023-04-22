#include "variadic_functions.h"
#include "stdargs.h"

/**
 *sum_them_all - gets the sum of all args
 *@n: arg count
 *Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_args(ap, int);
	va_end(ap);
	return (sum);
}
