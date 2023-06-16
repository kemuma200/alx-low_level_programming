#include "main.h"

/**
 *_strncat - appends src string to destination
 *	overwriting the null byte at the end of dest
 *	then adds a terminating null byte
 *
 *@dest: dest string
 *@src: appending string
 *@n: number of bytes from source
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (j = 0; *(src + j) != '\0' && j < n; j++, i++)
	{
	  *(dest + i) = *(src + j);
	}
	*(dest + i) =  '\0';
	return (dest);
}
