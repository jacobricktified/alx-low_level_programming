#include "main.h"

/**
* _strlen - This function prints the length of  string
* @s: pointer to the string
* @output: 16
* @len: variable to store the length of the string
* Description: This function prints the length of  string
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
