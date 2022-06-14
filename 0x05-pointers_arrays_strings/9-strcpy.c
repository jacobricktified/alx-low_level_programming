#include "main.h"

/**
 * _strcpy -a function that copies the string
 * @src: where the sting is coming from
 * @dest: where the string is copied into
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (a = 0; a <= len ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
