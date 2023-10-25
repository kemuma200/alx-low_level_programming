#include "lists.h"

/**
 *add_nodeint - function that adds a new node
 *@head:pointer to the head of a list
 *@n:data to insert to new list
 *
 *Return: address if new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	  return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
