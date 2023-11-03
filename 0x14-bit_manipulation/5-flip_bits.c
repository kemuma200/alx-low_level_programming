#include "main.h"

/**
 *flip_bits -  function that returns the number of bits you would
 *need to flip to get from one number to another
 *@n:original number
 *@m:distressed number
 *
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = n ^ m;
	unsigned long int bits = 0;

	while (p > 0)
	{
		bits += (p & 1);
		p >>= 1;
	}
	return (bits);

}
