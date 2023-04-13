#include "main.h"
/**
 * _isdigit - chceks for a digit
 * @c: parameter to be considered
 *
 *Return: 1 if digit, o if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
