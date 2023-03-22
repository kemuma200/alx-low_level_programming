#include<stdio.h>
/**
 * main - adds numbers which are divisible
 *			by either 5 or 3
 *@num: parameter to be considered
 *@sum: summation
 * Return: Always 0
 */
int main(void)
{
	int num = 0, sum = 0;

	while (num < 1025)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
