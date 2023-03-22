#include <stdio.h>
/**
 *main - prints sum of even fib numbers
 *
 *Return: Always (0)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, total_sum;
	float sum = 0;

	while (num2 < 4000001)
	{
		
		num1 = num2;
		num2 += total_sum;
	}
	printf("%.0f\n", sum);
	return (0);
}
