#include <stdlib.h>
#include <time.h>

 /*
 * betty style doc for function main goes there
 *
 * main: is the start point of the program
 *
 * Description: main is the start of program
 *
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
 */

int main void
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	return (0);
}
