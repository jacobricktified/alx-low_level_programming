#include <stdio.h>

/**
*main - Start of the program 
*
*Description: prints all possible different combinations of two digits.
*
*Return: 0 means the program is successful
*
*time complexity is O(1)
*
*space complexity is O(1)
*/

int main(void)
{
    int tensDig; 
    int onesDig;

    for (tensDig = 0; tensDig <= 9; tensDig++)
    {
    for (onesDig = tensDig + 1; onesDig <= 9; onesDig++)
    {
    putchar(tensDig + '0');
    putchar(onesDig + '0');
    if (tensDig < 8)
    {
    putchar(',');
    putchar(' ');
    }
    }
    }
    putchar('\n');
    return (0);
}
