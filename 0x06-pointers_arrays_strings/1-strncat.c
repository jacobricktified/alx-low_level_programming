#include "main.h"
/**
 * _strncat - function that concatinates two strings
 * @dest: pointer parameter of type char that will be concatenated
 * @src: pointer parameter of type char that will be concatenated
 * @n: parameter of type int that represent to the number of bytes to copy
 * Return: pointer to dest string
 * Description: a function that concatinates two strings
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;
	char *end = dest;
	char *start = src;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		len++;
		src++;
	}

	if (n > len)
	{
		n = len;
	}

	src = st;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (end);
}
