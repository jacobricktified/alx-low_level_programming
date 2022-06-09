#include "main.h"
/**
 * _isupper - Function
 *
 * Description: Checks for uppercase characters
 *
 * @c: parameter of type int, name c.
 *
 * Return: returns 1 if c is uppercase else 0 
 */

int _isupper(int c)
{
    int result = 0;

    for (char uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        if (c == uppercase)
        {
            result = 1;
        }
        else if (c != uppercase)
        {
            result = 0;
        }

    }
}