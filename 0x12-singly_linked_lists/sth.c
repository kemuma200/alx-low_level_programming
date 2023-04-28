#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - define function
  * @head: describe argument
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
