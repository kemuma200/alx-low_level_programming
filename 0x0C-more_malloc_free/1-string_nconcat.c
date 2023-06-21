#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of s2 characters involved
 *Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get length of s1 */
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
		p[j] = s1[j];

	for (k = 0; k < n; k++)
		p[j + k] = s2[k];
	p[j + k] = '\0';
	return (p);

}
