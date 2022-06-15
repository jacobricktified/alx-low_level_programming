#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer of type int  that array of integers will be reversed
 * @n: size of the array
 * Return: void (nothing)
 * Description: a function that reverses the content of an array of integers.
*/

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
