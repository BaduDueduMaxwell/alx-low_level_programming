#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of the new dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
