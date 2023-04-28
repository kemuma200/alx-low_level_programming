#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked
 *		list, and returns the head node’s data (n)
 *@head: list
 *Return: 0 if list is empty, head node data otherwise
 */
int pop_listint(listint_t **head)
{
	int curr;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	curr = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (curr);

}
