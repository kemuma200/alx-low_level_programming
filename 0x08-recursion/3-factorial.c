#include "main.h"

/**
 *factorial - gets the factorial of a number
 *@n: integer being considered
 *Return: factorial of teh number, -1 if the number is less than zero
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
