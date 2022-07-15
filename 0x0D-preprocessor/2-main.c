#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description:  prints the name of the file it was compiled from
 *
 * Return: 0 on success, 1 on failure
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
