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
	int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					break;
				}
			}
			if (*(needle + j) == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
