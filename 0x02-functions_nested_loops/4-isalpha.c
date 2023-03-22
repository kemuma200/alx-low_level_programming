#include <stdio.h>
#include <regex.h>
#include "main.h"
/**
 * _isalpha - checks if character is found in the alphabet
 * @c - character to be considered
 *
 * Return : 1 if letter is part of alphabet, 0 if not
 */
int _isalpha(int c)
{
	int alpha_check;

	alpha_check = regcomp(c, "[A-Za-z]", 1);

	if (alpha_check == 1)
		return (1);
	else
		return (0);
}
