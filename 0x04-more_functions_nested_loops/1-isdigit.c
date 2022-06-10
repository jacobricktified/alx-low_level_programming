#include "main.h"

/**
* _isdigital - Print numbers between 0 to 9
*
* Return: 1 if c is a digit else 0
*
* @c : int to be checked
*/
int _isdigit(int c)
{
	int result;
	int num = '0';
	int alpha = 'a';

	for (num = '0'; num <= '9'; num++)
	{
	if (c == num)
	{
	result = 1;
	}
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (c == alpha)
	{
	result = 0;
	}
	}
	}
	return (result);
}
