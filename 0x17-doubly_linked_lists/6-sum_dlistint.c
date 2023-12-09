#include "lists.h"

/**
 *sum_dlistint - get the sum of list nodes
 *@head: linked list
 *RReturn: sum of nodes
 *
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int summ = 0;


	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
