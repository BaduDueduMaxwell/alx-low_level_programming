#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: double pointer to grid
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
