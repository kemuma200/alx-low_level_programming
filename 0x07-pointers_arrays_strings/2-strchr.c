#include "main.h"

/**
 *_strchr - returns a pointer to the first occurence of  a character
 *@s: string to be considered
 *@c: sought character
 *Return: pointer to the first occurence or null if absent
 */
char *_strchr(char *s, char c)
{

	if (c == '\0' || *s == '\0')
	{
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');

}
