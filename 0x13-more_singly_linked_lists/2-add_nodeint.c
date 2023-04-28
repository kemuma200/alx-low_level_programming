#include "lists.h"

/**
 *add_nodeint - adds node to the start of list
 *@head: list
 *@n: node to add
 *Return: pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = *head;
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
