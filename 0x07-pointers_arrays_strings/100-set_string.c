#include <stdio.h>
#include "main.h"

/**
 * set_string - function that sets a pointer to a string to another string
 * @s: pointer to the string to be set
 * @to: pointer to the string to be set to
 * Return: void (no return)
 * Description: function that sets a pointer to a string to another string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
