#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sum all arguments
 *@n: number of arguments
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, i;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}

