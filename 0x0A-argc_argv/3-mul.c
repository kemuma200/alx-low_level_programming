#include "stdio.h"
#include "stdlib.h"

/**
 *main - multiplies two numbers
 *	and prints result if arguments are passed
 *	or error if not passed
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}