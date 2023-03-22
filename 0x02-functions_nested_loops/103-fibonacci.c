#include <stdio.h>
/**
 *main - prints sum of even fib numbers
 *
 *Return: Always (0)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1;
	float sum = 0;
	unsigned long first_number;

	while (num2 < 4000001)
	{
		if ((num1 % 2) == 0)
			sum += num1;
		if ((num2 % 2) == 0)
			sum += num2;
		first_number = num1;
		num1 = num2;
		num2 += first_number;
	}
	printf("%.0f\n", sum);
	return (0);
}
