#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: address of memory
 * @old_size: size of old memory
 * @new_size: address of new memory
 * Return: address of memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mptr;

	if (ptr == NULL)
	{
		mptr = malloc(new_size);
		return (mptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	mptr = malloc(new_size);
	for (i = 0; i < new_size; i++)
		((char *) mptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (mptr);
}
