#include "main.h"

/**
 *main - prints the number of arguments
 *@argc: argument count
 *@arg: argument array
 *Return: 0
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
