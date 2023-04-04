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
boolean *str_comp(
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (*(needle + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(haystack + j) != '\0')
	{
		if (needle[0] == *(haystack + j))
		{
			if (*(needle + i) == *(haystack + i))
			{
				return (haystack + j);
			}
		}
		j++;
	}
	return ('\0');
}
