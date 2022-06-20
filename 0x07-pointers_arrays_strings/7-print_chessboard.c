#include "main.h"

/**
 * print_chessboard - pointer to the array of chars 
 * @a: pointer to the array of chars 
 * REturn: void (no return)
 * Description: function that prints a chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

