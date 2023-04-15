#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 *str_concat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to a newly allocated space in memory
 *	which contains the contents of s1
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, len;
	char *p;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	len = 0;
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = i + j + 1;

	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		p[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		p[k + l] = s2[l];
		l++;
	}
	p[k + l] = '\0';
	return (p);
}
