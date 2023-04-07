#include "main.h"

/**
 *factorial - returns the factorial of a number
 *@n: number considered
 *Return: -1 if number is less than0,
 *	1 if number is 0, factorial if
 *	number is greater than zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return factorial(n * factorial(n - 1);
	}  
}
