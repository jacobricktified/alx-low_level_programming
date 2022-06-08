#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @a: print from this number
 */
void print_to_98(int n)
{
	int i, b;

	if (a <= 98)
	{
		for (i = a; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (a >= 98)
	{
		for (b = a; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
