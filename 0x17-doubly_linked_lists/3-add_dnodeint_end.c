#include "lists.h"

/**
 *add_dnodeint_end -  function that adds a new node at the end of a dlistint_t list.
 *@head: list
 *@n: Item to be added
 *Return: address of new node or null
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
