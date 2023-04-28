#include "lists.h"

/**
 *free_list - function that frees a list
 *@head: starting position of list
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free_list(head);

}
