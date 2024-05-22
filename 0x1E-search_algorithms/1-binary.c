#include <stdio.h>

/**
 * binary_search - search for an element in an array using Binary search algo
 * @array: Array to loop through
 * @size: size of array
 * @value: value to search for
 * Return: array index if found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;
	int *end, *ptr, *head = array;

	if (array == NULL)
		return (-1);

	ptr = array;
	end = &array[size - 1];							/* OR  *(array + size - 1) */
	if (*head == value)
		return (ptr - array);

	while (ptr != end)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if (i != size - 1)
				printf("%d, ", head[i]);
			else
				printf("%d\n", head[i]);
		}
		mid = ((size + 1) / 2);
		ptr = head + (mid - 1);						/* Zero Indexed */
		if (*ptr == value)
			return (ptr - array);
		if (*(ptr + 1) > value)					/* MOVE LEFT */
		{
			end = ptr - 1;
			if (size % 2 == 0)
				size = size - mid - 1;
			else
				size = size - mid;
		}
		else										/* MOVE RIGHT */
		{
			size = size - mid;
			head = ptr + 1;
		}
	}
	return (-1);
}
