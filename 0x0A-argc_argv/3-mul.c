#include "main.h"

/**
 *main - multiplies two numbers
 *@argc - argument count
 *@argv - argument array
 *Return: 0 if successful, else 1
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
