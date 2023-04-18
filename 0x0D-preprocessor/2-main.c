#include "stdio.h"

/**
 *main - prints the name of teh file it was compiled from
 *	followed by  anew line
 *Return: 0
 */
int main()
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
