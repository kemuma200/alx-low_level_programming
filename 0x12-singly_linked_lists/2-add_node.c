#include <stddef.h>
#include <stdlib.h>
#include "lists.h"


/**
 *_strlen - gets the length of string
 *@a: string considered
 *Return: length
 *
 */
int _strlen(const char *a)
{
	int i;

	for (i = 0; a[i]; i++)
		;
	return (i);
}
/**
 *add_node - adds node to list
 *@head: head of linked list
 *@str: string to be duplicated
 *Return: pointer to new head
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	int a, len;
	char *p;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str), new = *head;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		p[a] = str[a];

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(p);
		return (NULL);
	}
	new->str = p;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);

}
