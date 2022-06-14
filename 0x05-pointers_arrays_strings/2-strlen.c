#include "main.h"

/**
*_strlen - This function prints the length of  string
*@s: pointer to the string
*Description: This function prints the length of  string
*Return: integer value of length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
