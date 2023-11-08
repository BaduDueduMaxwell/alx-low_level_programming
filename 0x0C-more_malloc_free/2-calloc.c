#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of element
 * @size: element bytes
 *
 * Return: pointer on success and NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (0);
	}

	char_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
