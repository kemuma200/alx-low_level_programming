#include "main.h"
#include <unistd.h>
/**
 * _putchar - print a character
 * @c: character considered
 * Return 1 on success, otherwise 0;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
