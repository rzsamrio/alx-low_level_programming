#include "main.h"

/**
 * _calloc - allocates memory for an array, with every block init to a 0
 * @nmemb: number of element in the array
 * @size: size of each element of the array
 * Return: address of the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int capacity = nmemb * size;
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(capacity);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < capacity; i++)
		arr[i] = 0;
	return (arr);
}

