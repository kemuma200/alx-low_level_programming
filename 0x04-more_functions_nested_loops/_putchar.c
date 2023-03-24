#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Parameter to be considered
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
