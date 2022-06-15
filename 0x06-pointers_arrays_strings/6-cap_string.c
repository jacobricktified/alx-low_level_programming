#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer parameter of type char that is the string to be changed
 * Return: string with all lowercase letters changed to uppercase.
 * Description: a function that capitalizes all words of a string.
*/
char *cap_string(char *s)
{
	char *x = s;

	while (*s != '\0')
	{
		if ((*(s - 1) == ' ' || *(s - 1) == '\t' ||
			*(s - 1) == '\n' || *(s - 1) == ',' ||
			*(s - 1) == '.' || *(s - 1) == '!' ||
			*(s - 1) == '?' || *(s - 1) == '\"' ||
			*(s - 1) == '(' || *(s - 1) == ')' ||
			*(s - 1) == '{' || *(s - 1) == '}') &&
			(*s >= 'a' && *s <= 'z'))
			*s -= 'a' - 'A';
		s++;
	}
	return (x);
}
