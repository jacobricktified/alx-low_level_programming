#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a struct dog.
 * @d: pointer to a variable of type struct dog.
 *
 * Return: void (no return value).
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
