#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end -adds a new node at the end of a list_t list
 *@head: linked list
 *@str:Duplicated string
 *Return:address of new element, else NULL
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
