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
	size_t a = 0;

	if (!h)
		return;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
