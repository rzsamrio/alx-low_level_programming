#include "main.h"

/**
 * array_range - creates an array containing a range of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: address of the array
*/

int *array_range(int min, int max)
{
	int *arr, i, length; /* declaring array, iterator and a temporary storage */

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < length ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
