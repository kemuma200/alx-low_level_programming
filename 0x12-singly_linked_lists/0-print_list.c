#include "lists.h"

/**
 *print_list - prints all elements of a list
 *@h:pointer to the head
 *Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h != NULL)
	{
		printf("%d\n", h->str);
		h = h->next;
	}
	else
	{
		printf("%s\n",  "[0](nil)");
		a++;
	}
	return (a);
}
