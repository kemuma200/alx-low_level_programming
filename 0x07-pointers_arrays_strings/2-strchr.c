#include "main.h"

/**
 *_strchr - returns a pointer to the first occurence of  a character
 *@s: string to be considered
 *@c: sought character
 *Return: pointer to the first occurence or null if absent
 */
char *_strchr(char *s, char c)
{
	int k;

	k = 0;
	if (c == '\0' || *s == '\0')
	{
		return (s);
	}
	while (*s != '\0')
	{
		if (k == 0 && *s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');

}
