#include "lists.h"

/**
 *delete_nodeint_at_index - delete node at given idx
 *@head: list
 *@index : index of deleted node
 *Return: 1 if succesful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *q;
	unsigned int i;

	p = *head;

	if (p == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	return (1);
}
