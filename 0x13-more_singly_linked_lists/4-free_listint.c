#include "lists.h"

/**
 *free_listint - function that frees list
 *@head: list
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}