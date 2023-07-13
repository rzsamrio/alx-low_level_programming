#include "main.h"

/**
 * _calloc - allocates memory for an array, with every block init to a 0
 * @nmemb: number of element in the array
 * @size: size of each element of the array
 * Return: address of the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb);
	return (arr);
}
