#include <stdio.h>

/*
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
    {
	printf("%i", numbers);
    putchar('\n');
    }

	return (0);
}