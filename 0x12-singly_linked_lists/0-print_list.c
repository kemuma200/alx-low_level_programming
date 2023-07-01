#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h:singly linked list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("[%d]] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
