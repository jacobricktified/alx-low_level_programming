#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, j, k;

	for (i = 0; i < 10; i++)
	{
		for (b= 0; b < 10; b++)
		{
			c = b * i;
			if (b == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}