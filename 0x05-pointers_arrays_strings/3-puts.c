#include "main.h"
/**
 *_puts - prints the string followed by a new line
 * @str: String in consideration
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
