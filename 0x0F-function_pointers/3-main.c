#include "3-calc.h"


/**
 *main - prints results of operations
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if succesful
 *
 */

int main(int __attribute__((__unused__))argc, char **argv)
{
	int num1, num2;
	char *op;


	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = atoi(argv[2]);

	if (get_op_func == NULL || num1 == '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((op == '/' && num2 == 0) ||
	    (op == '%' && num2 == 0))
	{
		printf("%s\n", "Error");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
