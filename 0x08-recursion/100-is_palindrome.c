#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @str: pointer to string to print
 * Return: int (length of string)
 *
 * Description: function that returns the length of a string.
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - check if a string is a palindrome
 * @l: left half of string
 * @r: right half of string
 * @p: pointer to string to print
 *
 * Return: int (1 if palindrome, 0 if not)
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: pointer to string to check
 *
 * Return: int (1 if palindrome, 0 if not)
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}

