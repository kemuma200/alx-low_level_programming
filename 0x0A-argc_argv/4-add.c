#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - program that adds positive numbers
 *@argc: argument count
 *@argv - argument array
 *Return: 0 if successful, else 1
 *
 */

int main(int argc, char **argv)
{
	int i, j, len;
	int summ = 0;
	char *p;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			len = strlen(p);
			for (j = 0; j < len; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			summ += atoi(argv[i]);
		}
		printf("%d\n", summ);
	}
	return (0);

}
