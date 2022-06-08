#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: integer parameter
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int b;

	if (c < 0)
	{
		c = c * -1;
		b = c % 10;
	}
	else
	{
		b = c % 10;
	}

	_putchar(b + '0');

	return (b);
}
