#include "main.h"

/**
 * malloc_checked - acts like malloc
 * @b: amount of memory to store
 * Return: address of memory to return
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
