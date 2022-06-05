#include <stdio.h>

/**
*main - is the start point of the program
*
*Description: prints all the numbers of base 16 in lowercase
*
*Return: 0 means the program is successful
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0');
	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
