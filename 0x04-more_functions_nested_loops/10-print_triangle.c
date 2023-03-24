#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int symbol, index;

	if (size > 0)
	{
		for (symbol = 1; symbol <= size; symbol++)
		{
			for (index = size - symbol; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < symbol; index++)
				_putchar('#');

			if (symbol == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
