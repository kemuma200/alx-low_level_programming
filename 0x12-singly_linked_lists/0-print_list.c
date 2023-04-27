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

	if (head == NULL)
		printf("%s\n", "[0] (nil)");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
