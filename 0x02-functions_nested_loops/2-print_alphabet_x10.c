#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *			followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int x = 0;

	while (x < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		x++;
	}
}
