#include "main.h"

/**
 *palindrome - checks whether the given string is a palindrome
 *@s: giben string
 *@start: left index
 *@end: right index
 *Return: 1 if palindrome, 0 if not
 */
int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (palindrome(s, start + 1, end - 1));
	return (0);
}

/**
 *str_length - gets the string length
 *@s: string to be considered
 *Return: length
 */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 *@s: String to be considered
 *Returns: function which checks if string is a palindrome
 *
 */

int is_palindrome(char *s)
{
	if (str_length(s) <= 1)
		return (1);
	return (palindrome(s, 0, str_length(s) - 1));
}
