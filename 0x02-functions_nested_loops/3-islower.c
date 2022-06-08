#include "main.h"

/**
 * _islower -checks for lowercase character
 *
 * Return: 1 means c is lowercase else 0
 *
 * @c: the character to check
 *
 * Descrition: a function that checks for lowercase character.
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
