#include "main.h"

/**
 *_strlen - outputs the length of a string
 *@s: character to be considered
 *Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
