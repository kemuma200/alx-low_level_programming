#include "main.h"

/**
 *_strpbrk - locates the first occurrence in the
 *	string s of any of the bytes in the string accept
 *@s: examined string
 *@accept: string with reqiored characters
 *Return:pointer to the byte in s or null
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s == '\0' || *accept == '\0')
	{
		return (s);
	}
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}
	return ('\0');

}
