#include <stdio.h>

/*
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that will Print all the letters except q and e
 *
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
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