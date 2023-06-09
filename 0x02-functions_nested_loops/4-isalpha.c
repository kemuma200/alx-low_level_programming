#include "main.h"
/**
 * _isalpha - checks if character is found in the alphabet
 * @c: character to be considered
 *
 * Return: 1 if letter is part of alphabet, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
