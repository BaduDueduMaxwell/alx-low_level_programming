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
	unsigned nme, ownr, i = 0;
	
	struct dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		for (nme = 0; name[nme] != '\0'; nme++)
		{
			new_dog->name = malloc(sizeof(char) * nme);

			if (new_dog->name == NULL)
			{
				free(new_dog->name);
				free(new_dog);
				return (NULL);
			}
		}
		for (i = 0; i < nme; i++)
		{
			new_dog->name[i] = name[i];
		}
		new_dog->age = age;
		for (ownr = 0; owner[ownr] != '\0'; ownr++)
		{
			new_dog->owner = malloc(sizeof(char) * ownr);

			if (new_dog->owner ==NULL)
			{
				free(new_dog->owner);
				free(new_dog);
				return (NULL);
			}
		}
		for (i = 0; i < ownr; i++)
		{
			new_dog->owner[i] = owner[i];
		}
	}
	return (new_dog);
}
