#include "main.h"

/**
 * sqtRecursive - return the square root of a number recursively
 * @n: number to find the square root of
 * @m: number to compare to
 * Return: int (square root of n)
 * Description: function that returns the square root of a number
 */

int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}

/**
 * _sqrt_recursion - return squareroot of a number
 * @n: number to find the square root of
 * Return: int (square root of n)
 * Description: function that returns the square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 * Return: int (1 if prime, 0 if not)
 * Description: function that returns 1 if a number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
