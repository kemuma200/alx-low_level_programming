#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 */
void print_line(int n)
{
	int my_len;

	if (n > 0)
	{
		for (my_len = 0; my_len < n; my_len++)
			_putchar('_');
	}

	_putchar('\n');
}
