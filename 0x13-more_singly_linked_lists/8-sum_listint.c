#include "lists.h"

/**
 *sum_listint-function that returns the linkedlist
 *@head:list
 *
 *Return: sum of the node values
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	unsigned int summ = 0;

	while (new && new != NULL)
	{
		summ += new->n;
		new = new->next;
	}
	return (summ);
}
