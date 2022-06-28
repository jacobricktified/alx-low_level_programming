#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: pointer to the 2D array of integers to free
 * @height: height of the grid to free
 * Return: void (no return value)
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
