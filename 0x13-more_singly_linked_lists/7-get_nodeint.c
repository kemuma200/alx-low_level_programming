#include "lists.h"

/**
 *listint_t *get_nodeint_at_index - returns nth node of a list
 *@index: idx of the node
 *@head:head of a list
 *Return:nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);

}
