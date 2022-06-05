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

	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		putchar(alf);
		putchar('\n');
	}
	return (0);
}
