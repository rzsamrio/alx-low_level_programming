#include "dog.h"

/**
 * free_dog - frees memory allocated for dog type
 * @d: address of memory to free
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->owner != NULL)
			free(d->owner);
		if (d->name != NULL)
			free(d->name);
		free(d);
	}
}
