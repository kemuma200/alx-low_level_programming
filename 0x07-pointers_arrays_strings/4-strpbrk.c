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
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == *s)
			{
			  return (s);
			}
			j++;
		}
		s++;
	}
	return ('\0');

}
