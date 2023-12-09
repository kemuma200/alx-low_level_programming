#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: linked list
 *@index: index of intended node
 *Returns:nth node or null if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
