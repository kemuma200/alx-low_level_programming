#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string in question
 *
 */
void rev_string(char *s)
{
	int i, start, len;
	char p;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	start = 0;
	p = '\0';
	while ( start < len )
	{
		s[start] = p;
		s[start] = s[len];
		s[len] = p;
		start++;
		len--;
	}

}
