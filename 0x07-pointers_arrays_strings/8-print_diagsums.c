#include "main.h"

/**
 *print_diagsums - prints the sum of the diagonals of a
 *		square matrix
 *@a:array being considered
 *@size: size of the array
 *Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < size; i++;)
	{
		sum += a[i][i];
	}
	return (sum);
}
