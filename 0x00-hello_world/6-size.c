#include <stdio.h>

/**
 * main-	the name of the function that is called when the program starts
 * Return:	showing that the program ran successfully.
 */

int main(void)
{
	float		this_float;
	int		this_int;
	long		this_long;
	long long	this_longlong;
	char		this_char;

	printf("Size of a float: %lu byte(s)\n", sizeof(this_float));
	printf("Size of an int: %lu byte(s)\n", sizeof(this_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(this_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(this_longlong));
	printf("Size of a char: %lu byte(s)\n", sizeof(this_char));

	return (0);
}
