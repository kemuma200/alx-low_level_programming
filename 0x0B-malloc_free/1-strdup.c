#include "main.h"

/**
 *_strdup -  function returns a pointer to a
 *	 new string which is a duplicate of the string str
 *@str: String being considered
 *Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);

	while (*(s + i) != '\0')
		i++;

	p = malloc(i * sizeof(char));

	if (p == NULL)
		return (NULL);
	while (str[j] != '\0')
		p[j] = str[j];
	p[j] = '\0';

	return (p)
}
