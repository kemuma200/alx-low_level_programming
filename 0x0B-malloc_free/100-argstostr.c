#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
	int i, j, k = 0, a;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0, argv[i][j] != '\0'; j++)
		{
			k++;
		}
		/* adding a new line for each string and  a null pointer */
		k += ac + 1;
	}
	p = malloc(sizeof(char) * k);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] == '\0')
				p[a] = '\n';
			p[a] = argv[i][j];
			a++;
		}
	}
	p[a + 1] = '\0';

	return (p);
}
