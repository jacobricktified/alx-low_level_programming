#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: pointer to an int
* @b: pointer to an int
* Description: swaps the values of two integers
* output: a=98 , b=402 , a=402 , b=98
* Return: void(nothing)
*/

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
