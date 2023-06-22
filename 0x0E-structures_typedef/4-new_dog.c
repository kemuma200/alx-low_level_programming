#include "dog.h"


/**
 *new_dog -function that creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c, d;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;

	p->name = malloc(a + 1);
	p->owner = malloc(b + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		p->name[c] = name[c];
	p->name[c] = '\0';

	for (d = 0; d < b; d++)
		p->owner[d] = owner[d];
	p->owner[d] = '\0';
	p->age = age;

	return (p);
}
