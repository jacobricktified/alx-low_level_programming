#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - print strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: void (no return)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		if (p)
		{
			printf("%s", p);
			if (i < n - 1)
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(strings);
}
