#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to the first occurrence of c
 * Description: locates the first occurrence of c in s
 * and returns a pointer to it .
 */

char *_strchr(char *s, int c)
{
	while (*s)
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	return (0);
}
