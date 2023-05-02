#include "lists.h"

/**
 *free_listint_safe - frees a listint_t list.
 *@h: list
 *Return:the size of the list that was free’d
 *
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i;
	listint_t *first, *second;

	first = *h;
	i = 0;
	if (h == 0 || first == 0)
		return (0);

	while (first != 0)
	{
		second = first;
		first = first->next;
		i++;

		free(second);

		if (second <= first)
			break;
	}
	*h = NULL;
	return (i);

}
