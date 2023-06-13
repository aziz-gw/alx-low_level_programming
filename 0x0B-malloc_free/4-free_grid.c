#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by
 * alloc_grid function
 * @grid: grind to be freed
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
