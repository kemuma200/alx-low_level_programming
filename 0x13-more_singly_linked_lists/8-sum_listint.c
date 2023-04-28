#include "lists.h"

/**
 *sum_listint - sum of linkedlist node values
 *@head: list
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
