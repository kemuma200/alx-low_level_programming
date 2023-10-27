#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *@head:list
 *@index:node index
 *
 *
 *Return: 1 if success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL;
	listint_t *p = *head;
	unsigned int i = 0;

	if (!head || !(*head) || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (p && i < (index - 1))
	{
		if (!(p->next) || p->next == NULL)
			return (-1);
		p = p->next;
		i++;
	}
	tmp = p->next;
	p->next = tmp->next;
	free(tmp);
	return (1);

}
