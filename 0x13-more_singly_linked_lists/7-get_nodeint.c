#include "lists.h"

/**
 *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *@head: list
 *@index: index of the node
 *Return: Null if node doesnt exist, nth node otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j, k = 0;

	while (head == NULL)
		k++;
	if (index > (k - 1))
		return (NULL);
	else
	{
		for (j = 0; j <= index; j++)
			head = head->next;
	}
	return (head);
}
