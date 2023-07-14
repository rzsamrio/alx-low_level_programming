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

	if (new_size > old_size)
	{
		mptr = malloc(new_size);
	}
	if (ptr == NULL)
	{
		mptr = malloc(new_size);
		return (mptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
		((char *) mptr)[i] = ((char *)ptr)[i];
	ptr = mptr;
	return (mptr);
}
