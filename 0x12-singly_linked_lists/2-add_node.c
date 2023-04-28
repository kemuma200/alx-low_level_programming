#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: starting point of the list
 *@str:str to be added
 *Return: address of added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = *head;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->next = *head;
	*head = p;
	return (*head);
}
