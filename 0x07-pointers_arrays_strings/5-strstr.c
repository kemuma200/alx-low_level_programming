#include "main.h"

/**
 *_strstr -function finds the first occurrence of
 *	the substring needle in the string haystack.
 *	The terminating null bytes (\0) are not compared
 *@needle: substring
 *@haystack: string being considered
 *
 *Return: pointer to beginning substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i  = 0; *(haystack + i) == *(needle + i); i++)
			;
		if (!(*(needle + i)))
			return (haystack);
		haystack++;
	}
	return ('\0');
}
