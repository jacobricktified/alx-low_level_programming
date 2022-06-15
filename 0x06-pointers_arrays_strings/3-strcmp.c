#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to a string
 * @s2: pointer parameter of type char that will be copied from
 * Return: pointer to dest string
 * Description: a function that compares two strings
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}

	return ((int)(*s1) - (int)(*s2));
}
