#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: list
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;


	if (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
