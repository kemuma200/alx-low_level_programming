#include "main.h"

/**
 *get_prime - determines whether a number is prime or not
 *@a:integer
 *@n:parameter considered
 *Return: 1 if prime, otherwise 0
 */
int get_prime(int a, int n)
{
	if (a == n)
		return (1);
	if (a == 0)
		return (0);
	return (get_prime(a + 1, n));

}


/**
 *is_prime_number - checks if input integer is a prime number
 *@n: input integer
 *Return:1 if input is prime, else 0
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(2, n));
}
