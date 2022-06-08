#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @c: the int to check
 * Return: 1 and prints plus if n > zero
 * Return: 0 and prints zero if n == zero
 * Return:-1 and prints negative if n < zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c == 0)
	{
		_putchar(48);
		return (0);
	} else if (c < 0)
	{
		_putchar('-');
	}
		return (-1);
}