
#include <stdio.h>

/**
*main - startin point of the program 
* 
*Description: Prints all possible combinations of three different digits
* 
*Return: 0 means the program is successful
* 
*Time complexity: O(1)
* 
*Space complexity: O(1)
*/ 

int main(void)
{
    int hundredsDig;
    int  tensDig;
    int onesDig;

    for (hundredsDig = 0; hundredsDig < 8; hundredsDig++)
    {
    for (tensDig = tensDig + 1; tensDig < 9; tensDig++)
    {
    for (onesDig = onesDig + 1; onesDig < 10; onesDig++)
    {
    putchar((hundredsDig % 10) + '0');
    putchar((tensDig % 10) + '0');
    putchar((onesDig % 10) + '0');

    if (hundredsDig == 7 && tensDig == 8 && onesDig == 9)
    continue;

    putchar(',');
    putchar(' ');
	}
    }
    }
    putchar('\n');

    return (0);
}