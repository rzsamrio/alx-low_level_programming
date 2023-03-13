#include <stdlib.h>

/**
 * create_array - creates an array and initialises it with content
 * @size : size of array
 * @c : content character
 * Return: pointer to array on succes and Null on failure
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (size > 0)
		for (i = 0; i < size; i++)
			array[i] = c;
	else
		return (NULL);
	return (array);
}
