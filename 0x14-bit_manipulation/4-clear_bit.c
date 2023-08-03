#include "main.h"

/**
 * clear_bit - set the indexed bit to 0
 * @n: address of int
 * @index: index to check
 * Return: -1 on fail, 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int d, test;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	d = 1;
	d <<= index;
	test = *n & d;
	if (test == 0)
		return (1);
	*n = *n ^ d;
	return (1);
}
