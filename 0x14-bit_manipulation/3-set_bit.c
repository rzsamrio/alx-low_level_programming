#include "main.h"

/**
 * set_bit - sets the indexed bit to 1
 * @n: address of int
 * @index: index
 * Return: 1 on SUCCESS and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int d;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	d = 1;
	d <<= index;
	*n = *n | d;
	return (1);
}
