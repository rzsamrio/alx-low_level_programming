#include "main.h"

/**
 * array_range - creates an array containing a range of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: address of the array
*/

int *array_range(int min, int max)
{
	int *arr, i, t_value; /* declaring array, iterator and a temporary storage */

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0, t_value = 0; i <= max; i++, t_value++)
		arr[i] = min + t_value;
	return (arr);
}
