#include "main.h"
 /**
 * @brief: print_rev - This function prints the string in reverse
 * @s: pointer to the string
 * Return: void (nothing)
 * Description: This function prints the string in reverse
 * output: vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
 *
 *
 */
void print_rev(char *s)
{
	int live;

	for (live = 0; s[live] != '\0'; live++)
	{
	}
	for (live = live - 1; live >= 0; live--)
	{
		_putchar(s[live]);
	}
	_putchar('\n');
}