#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 */
void print_line(int n)
{
	int line_len;

	if (n > 0)
	{
		for (line_len = 0; line_len < n; line_len++)
			_putchar('_');
	}

	_putchar('\n');
}
