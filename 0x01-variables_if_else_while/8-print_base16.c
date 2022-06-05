#include <stdio.h>

/**
*main - is the start point of the program
*
*Description:  prints all the numbers of base 16 in lowercase
*
*Return: 0 means the program is successful
*
*space time complexity is O(1)
*
*time complexity is O(1)
*/
int main(void)
{
	char number;
	
	for (number = '0'; number <= '9'; number++)
	putchar(number);
	for (number = 'a'; number <= 'f'; number++)
	putchar(number);
	putchar('\n');

	return (0);
}
