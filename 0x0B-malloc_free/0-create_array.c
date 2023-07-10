#include "main.h"

/**
 * create_array - creates an array of defined character
 * @size: size of array
 * @c: the character to store
 * Return: the address of the array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}

