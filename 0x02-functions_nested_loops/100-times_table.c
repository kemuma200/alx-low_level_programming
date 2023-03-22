#include "main.h"
/**
 *print_times_table - prints the n times time table
 *@n: parameter in question
 *n should not be greater than 15 or less than zero
 *
 */
void print_times_table(int n)
{
	int num, factor, result;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (factor = 1; factor <= n; factor++)
			{
				_putchar(',');
				_putchar(' ');
				result = factor * num;
				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
