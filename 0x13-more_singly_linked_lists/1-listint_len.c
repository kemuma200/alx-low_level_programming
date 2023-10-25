#include "lists.h"

/**
 *listint_len -function that returns the number of elements in a linked list
 *@h: linked list
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h && h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
