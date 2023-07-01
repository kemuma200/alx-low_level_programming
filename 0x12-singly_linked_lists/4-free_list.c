#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *free_list - frees a linked list
 *@head: linked list
 *
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->next);
		free(head);
		head = tmp;
	}
}
