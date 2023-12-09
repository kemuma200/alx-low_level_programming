#include "lists.h"

/**
 *dlistint_len - prints the length of a list
 *@h: list
 *Returns: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
