#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char, and initializes it
 * @size: size of bytes
 * @c: character
 * Returns: a pointer on success, and NULL on fail
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return p;
	}
	free(p);
}
