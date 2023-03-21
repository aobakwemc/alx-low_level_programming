/**
 * free_dog - a function that frees dogs.
 * @d: pointer to the dog to free.
 * Return: void
 */
#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
