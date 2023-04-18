#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
#include "stddef.h"

/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to dog struct
 *@name: dog name
 *@age: dog age
 *@owner: dog's guardiam
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
