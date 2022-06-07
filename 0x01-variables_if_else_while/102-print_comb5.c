#include <stdio.h>

/**
*main - the start point of the program
*
*Description: prints all possible combinations of two two-digit numbers
*
*Return: 0 means the program is successful
*
*time complexity is O(1)
*
*space complexity is O(1)
*/  

int main(void)
{
    int a, b;
    for(a = 0; a < 100; a++)
    {
    for(b = 0; b < 100; b++)
    {
    if(a < b)
    {
    putchar((a / 10) + 48); 
    putchar((a % 10) + 48);
    putchar(' ');
    putchar((b / 10) + 48);
    putchar((b % 10) + 48);
    if(a != 98 || b != 99)
    {
    putchar(',');
    putchar(' ');
    }
    }
    }
    }
    putchar('\n');
    return (0);
}
