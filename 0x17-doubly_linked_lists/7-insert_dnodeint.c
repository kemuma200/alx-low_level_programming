#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts node at specific index
 *@h: linked list
 *@idx: index position to insert
 *@n: element to insert
 *Return:address of new element or null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int count = 0, len = 0;

	while (*h != NULL)
	{
		len++;
		*h = (*h)->next;
	}
	if (idx > (len - 1))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (*h != NULL && count <= idx)
	{
		if (count == idx)
		{
			new = *h;
	  		(*h)->n = n;
	  		(*h)->next = new;
			return (*h);
	  	}
		count++;
		*h = (*h)->next;
	}
	return (NULL);
}
