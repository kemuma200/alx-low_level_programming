#include "dog.h"
#include "stdlib.h"


/**
 *free_dog - frees dog from memory
 *@d: struct dog
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->age);
	}
}
