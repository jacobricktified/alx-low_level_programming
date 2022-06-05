#include <stdio.h>

/**
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that prints the lowercase alphabet in reverse
 *
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
    {
	    putchar(letter);
	    putchar('\n');
    }

	return (0);
}