#include "lists.h"

/**
 *add_dnodeint - adds node to the beginning of a list
 *@head: list
 *@n: element to add
 *Returns: address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
