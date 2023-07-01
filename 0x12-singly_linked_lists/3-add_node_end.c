#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

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
 *_strdup - duplicates string
 *@old: old string
 *Return: pointer to new string
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
	for (a = 0; old[a]; a++)
		new[a] = old[a];
	new[a] = '\0';
	return (new);
}

/**
 *add_node_end -adds a new node at the end of a list_t list
 *@str: duplicated string
 *@head: linked list
 *Return: pointer to current position
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dest, *curr;
	char *dup;


	dup = _strdup(str);
	if (str == NULL || dup == NULL)
		return (NULL);
	dest = malloc(sizeof(list_t));
	if (dest == NULL)
		return (NULL);
	dest->str = dup;
	dest->len = _strlen(str);
	dest->next = NULL;

	if (head == NULL)
	{
		*head = dest;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = dest;
	return (*head);
}
