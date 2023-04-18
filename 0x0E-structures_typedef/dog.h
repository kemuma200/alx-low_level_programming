#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - struct
 *@name: name parameter
 *@age: age parameter
 *@owner: guardian parameter
 *
 */

typedef struct dog{
  char* name;
  float age;
  char* owner;
} dogP;

void init_dog(struct dog *d, char* name, float age, char* owner);

void print_dog(struct dog *d);
dogP *new_dog(char* name, float age, char* owner);
void free_dog(dogP *d);

#endif
