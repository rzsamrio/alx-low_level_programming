#include "function_pointers.h"

/**
 * int_index - compares integers in an array
 * @array: address of array
 * @size: size of array
 * @cmp: compare function
 * Return: -1 on error, the address of matching element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
