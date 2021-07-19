#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees an instance of the dog structure
 *
 * @d: pointer to the instance to free
 *
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
