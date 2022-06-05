#include <stdio.h>

/**
*main - is the start point of the program
*
*Description - this prints the alphabet in lowercase
*
*Return: 0 means the program is successful
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/

int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
	putchar(alpha);
	}
	for (alpha = 65; alpha <= 90; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');

	return (0);
}
