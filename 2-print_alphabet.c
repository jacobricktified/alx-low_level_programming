#include <stdio.h>
/*
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that will that prints the alphabet in lowercase
 * 
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
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