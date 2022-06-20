#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area to be copied
 * @src: pointer to the memory area to be copied from
 * @n: number of bytes to be copied
 * Return: pointer to the memory area dest .
 * Description: function that copies memory area .
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	return (dest);
}
