#include "lists.h"

/**
 *add_nodeint_end - add node to the end of a list
 *@head: list
 *@n: node to be added
 *Return: position of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *q;

	q = malloc(sizeof(listint_t));
	if (q == NULL)
	{
		return (NULL);
	}

	q->n = n;
	q->next = NULL;

	if (*head == NULL)
	{
		*head = q;
		return (*head);
	}

	p = *head;
	while (p->next != NULL)
		p = p->next;
	p->next = q;
	return (*head);
}
