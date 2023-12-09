#include "lists.h"


/**
 *print_dlistint - prints all the elements in a list
 *@h: list
 *Returns: number of nodes 
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
