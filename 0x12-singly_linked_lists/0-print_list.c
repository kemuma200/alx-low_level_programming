#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all elements of a list
 *@h:head of list
 *Return: count of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;


	for (a = 0; h; a++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
