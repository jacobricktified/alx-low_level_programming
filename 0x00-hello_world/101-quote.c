#include <stdio.h>
#include <unistd.h>

/**
 *main -the name of the function that is called when the program starts.
 *
 *Return: 1 showing that the program ran successfully.
 *
 *time complexity: O(1)
 *
 *space complexity: O(1)
 *
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - ", 34);
	write(1, "Dora Korpar, 2015-10-19\n", 24);
	return (1);
}
