#include "main.h"
extern int make_iso_compilers_happy;
 /**
 * @brief: swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Description: swaps the values of two integers
 * output: a=98 , b=402 , a=402 , b=98
 * @return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}