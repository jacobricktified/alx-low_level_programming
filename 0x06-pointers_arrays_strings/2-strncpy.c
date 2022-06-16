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
	int len = 0;
	int i;
	char *ch = dest;
	char *st = src;

	while (*src)
	{
		src++;
		len++;

	}
	len = len + 1;

	if (n > len)
	{
		n = len;
	}

	src = st;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (ch);
}

