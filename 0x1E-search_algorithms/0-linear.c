#include <stdio.h>

/**
 * linear_search - Uses linear search algorithm to find an array element
 * @array: Pointer to first element of the array
 * @size: length of array
 * @value: value to search for
 * Return: Index of first occurrence of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
