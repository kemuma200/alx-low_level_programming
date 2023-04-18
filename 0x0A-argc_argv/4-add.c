#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, numb, result;

	result = 0;
	if (argc < 2)
		printf("%d\n", 0);

	else
	{
		for (i = 0; i < argc; i++)
		{
			numb = atoi(argv[i]);
			if (isdigit(numb) == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			result *= numb;
			printf("%d\n", result);
		}
	}
	return (0);
}
