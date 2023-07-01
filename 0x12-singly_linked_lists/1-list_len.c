#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - finds the number of nodes
 *@h: singly linked list
 *Return: number of elements
 *
 */
size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
