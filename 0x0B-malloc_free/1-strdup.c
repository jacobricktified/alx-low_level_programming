#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 * Return: char pointer and null if fails
 */

char *_strdup(char *str)
{
	char *sd;
	unsigned int size = 0, z;

	if (str == NULL)
		return (NULL);
	for (z = 0; str[z] != '\0'; z++)
		size++;
	sd = malloc(sizeof(char) * (size + 1));
	if (sd == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		sd[z] = str[z];
	sd[size] = '\0';
	return (sd);
}

