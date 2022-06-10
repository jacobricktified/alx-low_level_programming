#include "main.h"

/**
* _isupper -  checks for uppercase character
* @c: int to be checked
* Return: 1 if c is uppercase else 0 otherwise
*/
int _isupper(int c)
{
char upper = 'A';
int res = 0;
for (; upper <= 'Z'; uppe++)
{
if (c == upper)
{
res = 1;
break;
}
}
return (res);
}
