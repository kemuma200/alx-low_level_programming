#include <stdio.h>
/**
 *main - prints the first 50 fib numbers
 *Return: Always 0
 */
int main(void)
{
	int num1 = 0, num2 = 1, summ = 0;
	int count;

	for (count = 0; count < 50; count++)
	{
		summ = num1 + num2;
		printf("%d", summ);

		num1 = num2;
		num2 = summ;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
