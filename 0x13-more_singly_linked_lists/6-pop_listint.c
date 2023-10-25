#include "lists.h"

/**
 *pop_listint - Function that removes head of linkedlist
 *@head: linkedlist
 *
 *Return: head or 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return(num);
}
