#include "3-main.h"

/**
 *op_add - adds two numbers
 *@a: first num
 *@b: second num
 *Return: addition result
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: first parameter
 *@b: second parameter
 *Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two digits
 *@a: first num
 *@b: second number
 *Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of two numbers
 *@a: first number
 *@b: second number
 *Return: division of first num by second num
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns the modulus
 *@b: second parameter
 *@a: first parameter
 *Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
