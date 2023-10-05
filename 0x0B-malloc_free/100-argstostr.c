#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: arguments
 *@av:argument array
 *Return:pointer to a  new string, else null
 *
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0, a = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;
	p = malloc(sizeof(char) * k + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[a] = av[i][j];
			a++;
		}
		if (p[a] == '\0')
			p[a++] = '\n';

	}

	return (p);
}
