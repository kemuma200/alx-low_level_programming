#include <stdio.h>
/**
 *main - prints sum of even fib numbers
 *@num1: first number
 *@num2: second number
 *@sum: summation of fin numbers
 *
 *Return: Always (0)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum = 0;
	unsigned long first_number;

	while (num2 < 4000001)
	{
		if ((num1 % 2) == 0)
			sum += num1;
		if ((num2 % 2) == 0)
			sum += num2;
		num1 = first_number;
		num1 = num2;
		num2 += first_number;
	}
	printf("%d\n", sum);
	return (0);
}
