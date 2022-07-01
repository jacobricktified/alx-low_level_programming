#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to reallocate
 * @old_size: size of the memory block
 * @new_size: size of the memory block to allocate
 * Return: pointer to the memory block or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
	clone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);
return (relloc);
}
