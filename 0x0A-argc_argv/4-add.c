#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, j, len, result;
	char *p;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		result = 0;
		for (i = 0; i < argc; i++)
		{
			p = argv[i];
			len = strlen(p);
			for (j = 0; j < len; j++)
			{
				if (isdigit(p[j]) == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
