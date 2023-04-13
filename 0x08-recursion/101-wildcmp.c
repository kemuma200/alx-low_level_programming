#include "main.h"

/**
 *comparison - checks if two strings are equal
 *@s1: first string
 *@s2: second string
 *Return: 1 if equal, 0 otherwise
 */
int comparison(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (comparison(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (comparison(s1, s2 + 1) || comparison(s1 + 1, s2))
			return (1);
	}
	return (0);
}
/**
 *str_length - gets the length of a given string
 *@t: string
 *Return: length of string
 *
 */
int str_length(char *t)
{
	if (*t == '\0')
		return (0);
	return (1 + str_length(t + 1));
}
/**
 *wildcmp- checks if two strings are equal
 *@s1: first string
 *@s2: second string
 *Return: function that compares the two
 */
int wildcmp(char *s1, char *s2)
{
	if (str_length(s1) == 0 && (str_length(s2) == 1 && *s2 == '*'))
		return (0);
	return (comparison(s1, s2));
}
