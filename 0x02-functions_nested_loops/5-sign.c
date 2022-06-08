#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : integer parameter
 * Return: 1 and print plus if n > 0
 * 0 and print zero if n == 0
 * -1 and print negative if n < 0
 */

int print_sign(int n)
{
	int res = 0;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
	} else if (n == 0)
	{
		res = 0;
		_putchar(48);
	} else if (n < 0)
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}
