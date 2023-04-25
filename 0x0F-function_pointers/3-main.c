#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the result of operations
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */
int main(int argc, char **argv)
{
	int digit1, digit2;
	char *op;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	digit1 = atoi(argv[1]);
	digit2 = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' || *op == '%') && (digit2 == 0))
	{
		printf("%s\n", "Error");
		exit(100);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(digit1, digit2));

	return (0);

}
