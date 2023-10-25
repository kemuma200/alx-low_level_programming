#include "lists.h"

/**
 *print_listint - function that prints all the elements of a list
 *@h: pointer to the head of the list
 *Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h && h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
