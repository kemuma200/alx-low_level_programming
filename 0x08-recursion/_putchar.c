#include <unistd.h>

/**
 *_putchar - prints character
 *@c: considered character
 *Return: 1 on success, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
