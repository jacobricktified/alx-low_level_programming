#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the byte to be filled
 * @n: number of bytes to be filled.
 * Return: pointer to the memory area s .
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x)  = b;
		x++;
	}

	return (s);
}
