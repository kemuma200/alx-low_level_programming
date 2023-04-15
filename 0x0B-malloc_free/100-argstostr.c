#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 *argstostr -  concatenates all the arguments of your program
 *@ac:argument count
 *@av:argument pointer
 *Return:pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	len++;

	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0, k = 0; av[i][j] != '\0'; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
	}
	p[k++] = '\0';
	return (p);

}
