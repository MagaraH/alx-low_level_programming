#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 *
 * @d: structure to free
 * Return: null
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
