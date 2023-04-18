#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 *new_dog - creates a new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog guardian
 *Return: null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *mbwa;

	mbwa = malloc(sizeof(dog_t));
	if (mbwa == NULL)
	{
		free(mbwa);
	}
	for (i = 0; *(name + i); i++)
		;
	for (j = 0, *(owner + j); j++)
		;
	mbwa->name = malloc(sizeof(i + 1));
	mbwa->owner = malloc(sizeof(j + 1));

	if (mbwa->name == NULL || mbwa->owner == NULL)
	{
		free(mbwa->name);
		free(mbwa->owner);
		free(mbwa);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		mbwa->name[k] = name[k];
	mbwa->name[k] = '\0';

	for (k = 0; k < j; j++)
		mbwa->owner[k] = owner[k];
	mbwa->owner[j] = '\0';

	mbwa->age = age;
	return (mbwa);
}
