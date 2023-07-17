#include "dog.h"

/**
 * free_dog - frees memory allocated for dog type
 * @d: address of memory to free
*/

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
