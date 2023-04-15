#include "main.h"
#include "stddef.h"
#include "stdlib.h"
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

	while (*(str + i) != '\0')
		i++;

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';

	return (p);
}
