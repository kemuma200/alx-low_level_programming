#include "main.h"
/**
 *times_table - prints the nine multiplication table
 *
 *Return: Always 0
 *
 */
void times_table(void)
{
	int num, factor, result;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');

		for (factor = 1; factor <= 9; factor++)
		{
			_putchar(',');
			_putchar(' ');

			result = factor * num;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
}
