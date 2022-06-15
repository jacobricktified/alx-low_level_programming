#include "main.h"

/**
 * _strcat - function that concatinates two strings
 * @dest: pointer parameter of type char that will be concatenated
 * @src: pointer parameter of type char that will be concatenated
 * Return: dest string with src concatenated
 * Description: a function that concatinates two strings
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, a = 0;

	while (dest[a] != '\0')
	{
		len++;
		a++;
	}

	a = 0;

	while (src[a] != '\0')
	{
		dest[len + a] = src[a];
		a++;
	}
	dest[len + a] = '\0';

	return (dest);
}
