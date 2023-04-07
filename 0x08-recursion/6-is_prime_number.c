#include "main.h"


/**
 *prime_number - checks if a number is a prime number
 *@x:number considered
 *@y: number iterating from x to 1
 *Return: 1 if prime, 0 otherwise
 */

int prime_number(int x, int y)
{
	if (x == 1)
		return (1);
	else
		{
			if (x % y == 0)
				return (0);
			return (prime_number(x, y - 1);
		}
}
/**
 *is_prime_number - prints 1 if the input is a prime number
 *@n: integer considered
 *Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if ( n <= 0)
		return (0);
	return (prime_number(n,(n / 2));
}
