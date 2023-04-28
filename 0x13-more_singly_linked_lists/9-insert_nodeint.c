#include "lists.h"

/**
 *insert_nodeint_at_index - inserts new node at given index
 *@head: list
 *@idx: index to insert
 *@n: node
 *Return: address of new node, or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *q;

	p = *head;
	q = malloc(sizeof(listint_t));
	if (q == NULL)
		return (NULL);
	q->n = n;
	if (idx == 0)
	{
		q->next = p;
		*head = q;
		return (*head);
	}
	while (idx > 1)
	{
		p = p->next;
		idx--;
		if (!p)
		{
			free(q);
			return (NULL);
		}
	}
	q->next = p->next;
	p->next = q;
	return (q);
}
