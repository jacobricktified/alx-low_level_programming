#include <stdio.h>

/**
 * main - start of program
 * @argc: length of command line input
 * @argv: array of command line argument
 * Return: 0 if success.
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

