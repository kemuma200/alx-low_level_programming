#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all elements of a list
 *@h:pointer to the head
 *Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == NULL)
	{
		printf("[0](nil)");
	}
	while (h)
	{
		printf("%d\n", h->str);
		h = h->next;
		a++;
	}
	return (a);
}
