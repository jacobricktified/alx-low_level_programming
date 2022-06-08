#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet
*
*Return: 0 means the program is successful
*
*Description: a function that prints 10 times the alphabet
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/

void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
