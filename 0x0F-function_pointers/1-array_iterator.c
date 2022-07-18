#include <stdio.h>

/**
 * array_iterator - prints an integer
 * @array: the array to print
 * @size: the size of the array
 * @action: the function to print the array
 * Return: void (no return)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
		{
			(*action)(array[x]);
		}
	}
}

