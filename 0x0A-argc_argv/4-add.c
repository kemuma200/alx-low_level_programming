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
	int i, j, result;

	result = 0;
	if (argc < 2)
		printf("%d\n", 0);

	else
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			  if (isdigit(argv[i][j] == 0))
				{
					printf("%s\n","Error");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
