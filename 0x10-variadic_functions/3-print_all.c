#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 *print_all - function that prints anything
 *@format: list of args passed to function
 *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *g, *sep = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format [i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 's':
					g = va_arg(args, char*);
					if (!g)
						g = "(nil)";
					printf("%s%s", sep, g);
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
 
  
}
