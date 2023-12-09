#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at idx position
 *@head: linkedlist
 *@index: position
 *Return: 1 if successful, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0, len = 0;


	if (*head == NULL)
		return (-1);
	while (*head)
	{
		count++;
		*head = (*head)->next;
	}
	if (index > (count - 1))
		return (-1);
	while (*head)
	{
		if (len == index)
		{
			*head = (*head)->next;
			(*head)->prev = ((*head)->prev)->prev;
		}
		len++;
		*head = (*head)->next;
	}
	return (1);
}
