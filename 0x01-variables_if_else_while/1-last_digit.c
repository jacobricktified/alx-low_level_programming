#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h> 

/*
 * betty style doc for function main goes there
 *
 * main - is the start point of the program that will print the last digit of the number stored in the variable n
 *
 * Return: 0 means the program is successful
 *
 * space time complexity is O(1)
 *
 * time complexity is O(1)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if ((n % 10) == 0)
    {
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
    }
	else if ((n % 10) > 5)
    {
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
    }
	else
    {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
    }

    return (0);
}