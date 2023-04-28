#include "lists.h"

/**
 *listint_len - returns no. of elements in a linked list
 *@h: head of the list
 *Return: element count
 */
size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
