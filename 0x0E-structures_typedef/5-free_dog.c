#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function to free dogs
 * @d: pointer to dog_t
 * Return: nothing
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
