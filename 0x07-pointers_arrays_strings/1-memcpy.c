#include "main.h"

/**
 *_memcpy - copies n bytes from src to dest
 *@dest:copy destination
 *@src: item to be copied
 *@n:bytes copied
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *final = dest;

	i = 0;
	while (*(src + i) != '\0')
	{
		if (i < n)
		{
		  *(dest + i) = *(src + i);
		}
		i++;
	}

	return (final);
}
