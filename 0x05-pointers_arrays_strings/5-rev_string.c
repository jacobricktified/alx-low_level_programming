#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string that is being reversed
 * Return: void(nothing)
 * Decsription: this function prints the string in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
