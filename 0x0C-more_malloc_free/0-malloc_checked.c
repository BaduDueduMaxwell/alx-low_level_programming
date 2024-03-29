#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: integer
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
