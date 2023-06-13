#include "main.h"

/**
 *get_sqrt - returns the square root of a number
 *@a: comparison square root integer
 *@n: square
 *Return: 1 if a is greater than n, otherwise square root
 */
int get_sqrt(int a, int n)
{
	if ( a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (get_sqrt(a + 1, n));

}

/**
 *_sqrt_recursion - gets the square root of a number
 *@n: considered parameter
 *Return: natural square toot of a number, or -1 if n is less than zero
 */

int _sqrt_recursion(int n)
{
	if ( n < 0)
		return (-1);
	return (get_sqrt(0, n));
}
