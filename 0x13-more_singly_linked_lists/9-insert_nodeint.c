#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts
 *a new node at a given position
 *@head: list
 *@idx: idnex where node should be added
 *@n:data to insert
 *
 *Return: addres of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *tmp;
	unsigned int i = 0;

	if (!head || head == NULL)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	while (p && i < idx)
	{
		if (i == idx - 1)
		{
			tmp->next = p->next;
			p->next = tmp;
			return (tmp);
		}
		else
		{
			p = p->next;
		}
		i++;
	}
	return (NULL);
}
