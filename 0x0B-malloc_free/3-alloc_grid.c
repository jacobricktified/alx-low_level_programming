#include <stdlib.h>

/**
 * **alloc_grid - allocates memory for a 2D array of integers
 * @width: columns of the grid to allocate
 * @height: rows of the grid to allocate
 * Return: pointer to the 2D array of integers or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int index, z, y;

	if (width <= 0 || height <= 0)
		return (0);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (index = 0; index < height; index++)
	{
		*(a + index) = (int *)malloc(sizeof(int) * width);
		if (*(a + index) == 0)
		{
			for (z = 0; z < index; z++)
				free(*(a + z));
			free(a);
			return (0);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (y = 0; y < width; y++)
			*(*(a + z) + y) = 0;
	}
	return (a);
}
