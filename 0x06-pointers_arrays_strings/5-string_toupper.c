#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @s: pointer parameter of type char that is the string to be changed
 * @n: size of the array
 * Return: string with all lowercase letters changed to uppercase.
 * Description: a function that changes all lowercase letters of a string to uppercase.
*/
char *string_toupper(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (t);
}
