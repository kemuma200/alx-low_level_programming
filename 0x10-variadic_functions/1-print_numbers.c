#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *@separator: character printed after digits
 *@n: number of arguments/numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
