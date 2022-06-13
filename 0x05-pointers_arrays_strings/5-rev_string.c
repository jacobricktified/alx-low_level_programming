#include <stdio.h>
#include "main.h"
 /**
 * @brief: this function prints the string in reverse
 * @param: s is the string to be reversed
 * @return: void(nothing)
 * Description: this function prints the string in reverse
 * output: vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}