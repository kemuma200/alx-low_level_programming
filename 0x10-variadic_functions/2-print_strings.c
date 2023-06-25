#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *print_strings - prints strings followed by a separator if any
 *@separator: item printed between consecutive strings
 *@n: string count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *k;
	unsigned int a;

	if (n < 0)
		return;
	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		k = va_arg(args, char *);
		if (k == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", k);
		if (n != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
