#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL if width is zero or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = malloc(sizeof(*p) * height);

	if (p == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (0);
		}
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
