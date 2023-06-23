#include "3-calc.h"


/**
 *op_add - adds two numbers
 *@a: first integer
 *@b: second integer
 *Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: first number
 *@b: second number
 *Return: subtraction result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: first number
 *@b: second number
 *Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: first number
 *@b: second number
 *Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - returns the remainder of division
 *@a: firts number
 *@b: second number
 *Return: modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
