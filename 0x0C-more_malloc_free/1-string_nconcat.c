#include "main.h"
#include "stdlib.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: bytes of s2 that are appended to concat string
 *Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	int i, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	p = malloc(sizeof(char) * (i + k + 1));
	if (p == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
	{
		p[l] = s1[l];
	}
	for (m = 0; m < n && s2[m]; m++)
	{
		p[l + m] = s2[m];
	}
	p[l + m] = '\0';

	return (p);
}
