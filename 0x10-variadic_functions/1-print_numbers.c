#include "variadic_functions.h"

/**
 *print_numbers - print numbers
 *@separator: string to be printed between numbers
 *@n: number of numbers to be printed
 *Return: void (no return)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}

