#include "main.h"

/**
 *binary_to_uint - function that converts
 *a binary number to an unsigned int
 *@b: binary number
 *
 *Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int num = 0;
	int mult = 1;

	if (*b == '\0')
		return (0);
	while (*(b + len) != '\0')
	{
		len++;
	}
	for (len -= 1; len >= 0; len--)
	{
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
