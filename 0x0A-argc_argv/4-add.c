#include "main.h"
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
	int i;
	int summ = 0;

	if (argc < 1)
		printf("%d\n", 0);
	for (i = 0; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("%s\n", "Error");
			return (1);
		}
		summ += atoi(argv[i]);
	}
	printf("%i\n", summ);
	return (0);
}
