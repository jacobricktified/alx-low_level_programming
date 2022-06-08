#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @b: the character to be checked
 * Return: 1 if b is a letter else 0
 */
int _isalpha(int b)
{
	return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}
