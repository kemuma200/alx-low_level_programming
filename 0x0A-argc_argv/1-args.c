#include "stdio.h"

/**
 *main - prints the number of arguments passed to it
 *@argc: argument count
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; *(argv + i); i++)
			;
		printf("%d\n", i - 1);
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
