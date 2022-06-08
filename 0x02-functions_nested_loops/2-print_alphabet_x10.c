#include "main.h"

/**
*print_alphabet - start of the program
*
*Return: 0 means the program is successful
*
*Description: prints the alphabet, in lowercase
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
	_putchar(alph);
	alph++;
	}
	_putchar('\n');
}
