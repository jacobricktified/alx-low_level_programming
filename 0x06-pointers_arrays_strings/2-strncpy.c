#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer parameter of type char that will be copied to
 * @src: pointer parameter of type char that will be copied from
 * @n: parameter of type int that represent to the number of bytes to copy
 * Return: pointer to dest string
 * Description: a function that copies a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (i < n)
	{
		if (len < i)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}

	return (dest);
}

