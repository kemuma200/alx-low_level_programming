#include "dog.h"
#include "stdio.h"
#include "stddef.h"

/**
 *print_dog - prints struct dog
 *@d: pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = (nil);
	if (d->owner == NULL)
		d->owner = (nil);
	if (d->age == NULL)
		d->age = (nil);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
