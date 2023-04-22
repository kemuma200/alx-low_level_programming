#include "variadic_functions.h"
#include "stdargs.h"

/**
 *print_all - prints char, int, float or char*
 *	contined in args
 *@char:
 *@format:
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	char *arg_p, *sep = "";

	va_list ap;
	va_start(ap, format);
	i = 0;
	while (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'i':
					printf("%d", va_args(ap, int));
					break;
				case 'f':
					printf("%f", va_args(ap, double));
					break;
				case 'c':
					printf("%c", va_args(ap, int));
					break;
				case 's':
					arg_p = ("%d", va_args(ap, char*));
					if (arg_p == NULL)
						printf("%s", arg_p);
					else
						printf("%s", "(nil)");
					break;
				default:
					i++;
					continue;
			}
			sep = ","
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
