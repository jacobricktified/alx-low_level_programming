#include <stdio.h>

/**
*main - is the start point of the program
*
*Description : Print the alphabet in lowercase
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

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
