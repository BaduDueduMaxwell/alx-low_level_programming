#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a varibale of type struct dog
 * @d: first variable
 * @name: second variable
 * @age: third variable
 * @owner: fourth varibale
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
