#include "main.h"

/**
 *_memset - fills the first n bytes of memory area with b
 *@s: memory area
 *@b: filling character
 *@n: number of bytes considered
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
