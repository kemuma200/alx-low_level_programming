#include <stdio.h>

/**
 *_putchar - prints character to stdout
 *@c: character to be printed
 *Return: 1 if succesful, else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
