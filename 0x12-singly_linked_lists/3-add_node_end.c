#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 *_strlen - gets str length
 *@a: string
 *Return: length of string
 */
int _strlen(const char *a)
{
	int k;

	for (k = 0; a[k]; k++)
		;
	return (k);
}

/**
 *
 *
 *
 *
 *
 */
void *_strdup(const char *old)
{
	int a, len;
	char *new;

	len = _strlen(old);
	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (
}
