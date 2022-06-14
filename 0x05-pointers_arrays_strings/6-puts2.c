#include <stdio.h>
#include "main.h"

/**
 * puts2 -print every other character of a string
 * @str: pointer to the string
 * output: 2 4 6 8 10
 * Description: This function prints  every other character of a string
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
