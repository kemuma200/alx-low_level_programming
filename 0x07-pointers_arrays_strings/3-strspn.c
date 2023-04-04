#include "main.h"

/**
 *_strspn - number of bytes in the initial segment
 *	of s which consist only of bytes from accept
 *@s: initial string
 *@accept: string determining prefix
 *Return: bytes in prefix s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	k = 0;
	for (i = 0;s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
