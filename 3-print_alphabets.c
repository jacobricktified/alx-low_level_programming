#include <stdio.h>

/*
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that will print the alphabet in lowercase, and then in uppercase, followed by a new line.
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

	for (alpha = 97; alpha <= 122; alpha++)
    {
        putchar(alpha);
    }
    putchar('\n');
	for (alpha = 65; alpha <= 90; alpha++)
    {
		putchar(alpha);	
    }
    
	return (0);
}