#include <stddef.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: pointer to the first occurrence of needle
 * Description: locates the first occurrence.
 * of substring needle in string haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

