#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *print_dog - prints elements of the dog construct
 *@d: struct considered
 *Return: nothing
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
