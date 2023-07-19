#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: address of array of integers as elemets
 * @size: size of the array
 * @action: address of the action to be taken on member elements
 *
 * It iterates through an array and performs a function to its elements
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
