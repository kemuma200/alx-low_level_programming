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

	for (a = 0; a < n; a++)
	{
		if (!separator)
		{
			printf("%d", va_arg(args, int));
		}
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);

}
