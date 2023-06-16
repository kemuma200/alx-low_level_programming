#include <stdio.h>

/**
 *main - prints the name of the program
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
