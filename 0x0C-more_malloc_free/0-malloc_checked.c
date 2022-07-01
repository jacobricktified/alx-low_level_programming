#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to allocate
 * Return: void (pointer to the allocated memory)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	/* create new memory space */
	ptr = malloc(b);

	/* check if new memory has been allocated */
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
