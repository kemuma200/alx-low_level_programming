#include "variadic_functions.h"
#include "stdargs.h"
#include "stdio.h"

/**
 *print_strings - prints string followed by the separator
 *@s: separator
 *@n: arg count
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string_p;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string_p = va_args(ap, char);
		if (string_p == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string_p);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
