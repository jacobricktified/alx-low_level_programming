#include "main.h"
/**
 * _isupper - Function
 *
 * Description: Checks for uppercase characters
 *
 * @c: parameter of the function is an int type
 *
 * Return: returns 1 if c is uppercase else 0 
 */

int _isupper(int c)
{
    int result;
    int upper = 'A';
    int lower = 'a';

    for (upper = 'A'; upper <= 'Z'; upper++)
    {
        if (c == upper)
        {
            result = 1;
        }
        for (lower = 'a'; lower <= 'z'; lower++)
            {
            if (c == lower)
            {
                result = 0;
            }
            }
    }
    return (result);
}