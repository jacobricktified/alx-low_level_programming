#include "main.h"

/**
*main - start of the program
*
*Return: 0 means the program is successful
*
*Descrition: a program that prints _putchar
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/

int main(void)
{
	char w[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar (w[i]);
	}
	_putchar ('\n');
	return (0);
}
