#include "main.h"

/**
 *_sqrt - checks if c is the sqrt of a
 *@a: square
 *@c:sqrt of a
 *Return:sqrt
 */

int _sqrt(int a, int c)
{
	if (c * c == a)
		return (c);
	if (c * c > a)
		return (-1);
	return _sqrt(a, c + 1);
}
/**
 *_sqrt_recursion - prints the natiral sqrt of a number
 *@n: integer considered
 *Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
