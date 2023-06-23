#include "3-calc.h"

/**
 *main - prints the opcodes of its own main function
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if succesful
 *
 */
int main(int argc, char **argv)
{
	int a, p;
	char *b;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}
	b = (char *)main;
	for (a = 0; a < p; a++)
	{
		if (a == p - 1)
		{
			printf("%02hhx\n", b[a]);
			break;
		}
		printf("%02hhx ", b[a]);
	}
	return (0);
}
