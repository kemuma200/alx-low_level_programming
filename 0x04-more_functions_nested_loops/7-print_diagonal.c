#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int line_len, space;

	if (n > 0)
	{
		for (line_len = 0; line_len < n; line_len++)
		{
			for (space = 0; space < line_len; space++)
				_putchar(' ');
			_putchar('\\');

			if (line_len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
