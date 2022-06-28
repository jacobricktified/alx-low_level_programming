#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * Return: pointer to new string or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int z = 0, i, size = 0;
	char *str;

	if (s1 != NULL)
		for (z = 0; s1[z] != '\0'; z++)
			size++;
	if (s2 != NULL)
		for (z = 0; s2[z] != '\0'; z++)
			size++;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		str[0] = '\0';
		return (str);
	}
	if (s1 != NULL)
		for (z = 0; s1[z] != '\0'; z++)
			str[z] = s1[z];
	if (s1 == NULL)
		z = 0;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
		{
			str[z] = s2[i];
			z++;
		}
	str[size] = '\0';
	return (str);
}

