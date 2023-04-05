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
	int m, f, i, j;

	i = 0;
	while (*(needle + i) != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (haystack);
	}
	j = 0;
	while (*(haystack + j) != '\0')
	{
		if (needle[0] == *(haystack + j))
		{
			m = i;
			for (m = m - 1; m < i && needle[m] != '\0' && haystack[m] != '\0'; m--)
			{
				f = 0;
				if (*(needle + f) == *(haystack + j + f)
				{
					f++;
					if (f == i - 1)
					{
						return (haystack + j + f);
					}
			}
		}
		j++;
	}
	return ('\0');
}
