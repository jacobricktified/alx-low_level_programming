#include "main.h"
#include <unistd.h>
 /**
 * @brief: _puts - This function prints the string to stdout
 * @str: pointer to the string
 * @output: I do not fear computers. I fear the lack of them - Isaac Asimov
 * Description: This function prints the string to stdout
 * Return: void (nothing)
 *
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}