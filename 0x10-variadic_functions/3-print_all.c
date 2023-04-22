#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 *print_all - prints char, int, float or char*
 *	contined in args
 *@format: list of constants
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	char *arg_p, *sep = "";

	va_list ap;
	va_start(ap, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep,  va_arg(ap, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 's':
					arg_p = va_arg(ap, char*);
					if (arg_p == NULL)
						printf("%s%s", sep, arg_p);
					else
						printf("%s%s", sep, "(nil)");
					break;
				default:
					i++;
					continue;
			}
			sep = ",";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
