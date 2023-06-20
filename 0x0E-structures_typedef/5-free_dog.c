#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it frees dog struct type formed
 * @d: pointer to dog to be freed
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
