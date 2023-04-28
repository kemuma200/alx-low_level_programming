#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - prepend a node
 *@head: head of linkedlist
 *@str:str to be added
 *Return: position of added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *q;
	unsigned int len = 0;

	while (str[len])
		len++;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = len;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}
	q = *head;
	while (q->next != NULL)
		q = q->next;
	q->next = p;
	return (*head);
  
}
