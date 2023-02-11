#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all the memory allocated to d
 * @d: instance of a dog that has been allocated memory
 *
 * Return: Nothing
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
