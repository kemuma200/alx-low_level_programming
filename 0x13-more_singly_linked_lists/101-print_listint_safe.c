#include "lists.h"
#include <stdio.h>

/**
 *print_listint_safe - prints a listint_t linked list
 *@head: list
 *Return: nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i;
	const listint_t *first, *second;

	i = 0;
	first = head;
	if (first == NULL)
		return (0);

	while (first != 0)
	{
		second = first;
		first = first->next;
		i++;

		printf("[%p] %d\n", (void *)second, second->n);

		if (second <= first)
		{
			printf("[%p] %d\n", (void *)first, first->n);
			break;
		}
	}
	return (i);
}