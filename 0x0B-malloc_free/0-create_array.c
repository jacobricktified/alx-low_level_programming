#include "main.h"
#include <stdlib.h>

/**
 * create_array - dynamically create array of chars
 * @size: size of array
 * @c: character to fill array with
 * Return: pointer to array or NULL if failure occurs
 * Description: a function that creates an array of chars.
 */

char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int z;

	if (size == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * size);
	if (char_arr == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		char_arr[z] = c;
	return (char_arr);
}
