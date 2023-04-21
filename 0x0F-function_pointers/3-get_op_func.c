#include "3-calc.h"

/**
 *get_op_func - selects the correct function to perform the operation
 *@s: operator passed as argument to the program
 *Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int j;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_mul},
		{"%", op_mod},
		{NULL, NULL},
	};

	j = 0;
	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}
