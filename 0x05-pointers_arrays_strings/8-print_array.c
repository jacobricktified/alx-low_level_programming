#include "main.h"
#include <stdio.h>

 /**
 * print_array -  prints elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements in the array
 * output: 98, 402, -198, 298, -1024
 * Description: prints elements of an array of integers
 * return: void(nothing)
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
