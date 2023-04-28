#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints the elements in a list
 *@h: head 
 *Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
