#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes
 * @new_size: new size in bytes
 *
 * Return: NULL on failure and ptr on success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copied_size;
	void *new_ptr;

	ptr = malloc(sizeof(int) * old_size);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copied_size = (old_size < new_size) ? old_size : new_size;

	if (copied_size != 0)
	{
		memcpy(new_ptr, ptr, copied_size);
	}
	free(ptr);
	return (new_ptr);
}
