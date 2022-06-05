#include <stdio.h>

/**
*main - is the start point of the program
*
*Return: 0 means the program is successful
*
*Description: Print all the letters except q and e
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' &&  != 'q')
	putchar(alpha);
	putchar('\n');
	}

	return (0);
}
