#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched .
 * @c: character to be located .
 * Return: pointer to the first occurrence of c
 * Description: locates the first occurrence of c in s
 * and returns a pointer to it .
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (*s)
	{
		if ((*s == c) && (count == 0))
		{
			return (s);
			count++;
		}
		s++;
	}
	return (NULL);
}
