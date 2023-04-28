#include "lists.h"

/**
 *reverse_listint - reverses list
 *@head: list
 *Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_prev, *p_next;

	if (head == NULL || *head == NULL)
		return (NULL);
	p_next = NULL;
	while ((*head)->next != NULL)
	{
		p_prev = (*head)->next;
		(*head)->next = p_next;
		p_next = *head;
		*head = p_prev;
	}
	(*head)->next = p_next;
	return (*head);
}
