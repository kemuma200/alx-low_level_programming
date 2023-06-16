#include "main.h"

/**
 *main - prints all the arguments availed
 *@argc: argument count
 *@argv: argument array
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
