#include "main.h"
#include <stdio.h>
/**
 * main - prints fizz for multiples of 3, buzz for multiples of 5,
 *		fizzbuzz for multiples of both 3 and 5, and the number
 *		if it fails to satisfy any condition.
 *Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return (0);
}
