#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *_isDigit - checks if character is a digit
 *@s: character considered
 *Return: True or false
 *
 */
int _isDigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 *errors - Rendered when an error is encountered
 *
 */
void errors(void)
{
	printf("%s\n", "Error");
	exit(98);
}

/**
 *_strlen - length of string
 *@s: string considered
 *Return: length of string
 *
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if successful, else error
 *
 */

int main(int argc, char **argv)
{
	char *s1, *s2;
	int len1, len2, carry, dig1, dig2, a, i = 0, *p;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isDigit(s1) || !_isDigit(s2))
		errors();
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]);

	p = malloc(sizeof(int) * (len1 + len2 + 1));
	if (p == NULL)
		return (1);
	for (a = 0; a < (len1 + len2); a++)
		p[a] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		carry = 0;

		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			carry += p[len1 + len2 + 1] + (dig1 * dig2);
			p[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			p[len1 + len2 + 1] += carry;
	}
	for (a = 0; a < (len1 + len2); a++)
	{
		if (p[a])
			a = 1;
		if (i)
			_putchar(p[a] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}
