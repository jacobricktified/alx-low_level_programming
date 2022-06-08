#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int b;

	if (c < 0)
		c = -n;

	a = c % 10;

	if (b < 0)
		b = -a;

	_putchar(b + '0');

	return (b);
}