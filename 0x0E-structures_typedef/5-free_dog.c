#include "dog.h"
#include "stdlib.h"

/**
 *free_dog - frees the memory occupied bu struct dog
 *@d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);

	}
}
