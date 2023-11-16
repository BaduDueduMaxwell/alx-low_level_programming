#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - check the code
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of this dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
