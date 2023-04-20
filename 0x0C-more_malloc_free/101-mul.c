#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 *_strlen - returns the length of a string
 *@s: string considered
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_isdigit - checks if character is a number
 *@s: character to be considered
 *Return: 1 if true, 0 otherwise
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 *_printErrors - prints Error string and exits
 */
void _printErrors(void)
{
	printf("%s\n", "Error");
	exit(98);
}

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument array
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int len, len1, i, j, num1, num2, k, l, *res, carry;
	char *s, *s1;

	l = 0;
	s = argv[1], s1 = argv[2];
	if (argc < 4 || _isdigit(s) == 0 || _isdigit(s1) == 0)
		_printErrors();
	len = _strlen(s), len1 = _strlen(s1);
	res = malloc((len + len1 + 1) * sizeof(int));
	if (!res)
		return (1);
	for (i = 0; i < len + len1; i++)
		res[i] = 0;
	for (j = len - 1; j >= 0; j--)
	{
		num1 = s[len] - '0';
		carry = 0;
		for (k = len1 - 1; k >= 0; k--)
		{
			num2 = s1[k];
			carry += res[len1 + len + 1] + (num1 * num2);
			res[len1 + len + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len + len1 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			l = 1;
		if (l)
			_putchar(res[i] + '0');
	}
	if (!l)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
