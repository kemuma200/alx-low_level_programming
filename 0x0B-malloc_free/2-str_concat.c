#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the string, else null
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2, k, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*get length*/
	len1 = 0;
	len2 = 0;
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		s[k] = s1[k];

	for (f = 0; f < len2; f++)
		s[k + f] = s2[f];

	s[k + f] = '\0';
	return (s);
}
