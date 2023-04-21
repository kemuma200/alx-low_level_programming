#include "3-calc.h"
#include <stdio.h>

/**
 *main - prints the result of operations
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */
int main(int argc, char **argv)
{
	int p;

	if (argc < 4)
	{
		printf("%d\n", "Error");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-')
				  && (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%'))
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((argv[2][0] == '/') || (argv[2][0] == '%')) && atoi(argv[3] == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	p = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", p);
	return (0);
}
