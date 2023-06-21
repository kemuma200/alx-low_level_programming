#include "dog.h"

/**
 *init_dog - initializes struct dog
 *@d:dog's details
 *@name: dog's name
 *@age: age of dog
 *@owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d)
  {
    (*d).name = name;
    (*d).age = age;
    (*d).owner = owner;
  }
}
