#include "main.h"

/**
 * sqtRecursive - return the square root of a number iteratively
 * using recursion in binary search
 * @start: starting number
 * @end: ending number (not inclusive)
 * @m: number to compare to
 * Return: square root of m or -1
 * Description: function that returns the square root of a number
 */

int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (sqtRecursive(start, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursive(mid + 1, end, m));
	}
	return (-1);
}

/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: number to find the square root of
 * Return: square root of n
 * Description: function that returns the square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
