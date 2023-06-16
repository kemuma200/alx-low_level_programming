#include "main.h"

/**
 *main - prints the minimum number of coins to make change for an amount of money
 *@argc - argument count
 *@argv - argument array
 *Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, t_coins, b;
	int coins[] = [25, 10, 5, 2, 1];


	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	t_coins = 0;
	if (i < 0)
		print("%d\n", 0);

	for (b = 0; b < 5 && i >= 0; b++)
	{
		if (i >= coins[b])
		{
		  t_coins += (i / coins[b]);
		}
		i = i % coins[b];
	}
	printf("%d\n", t_coins);
	return (0);
}
