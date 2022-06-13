#include "main.h"

 /**
 * @brief: puts_half - This function prints half of the string
 * @param:  str - pointer to the string
 * @output: 56789
 * Description: This function prints half of the string
 * Return: void (nothing)
 * @note: This function prints half of the string
 */

void puts_half(char *str)
{
	int length, n, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}