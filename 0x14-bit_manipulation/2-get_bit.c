#include "main.h"

/**
 * get_bit - gets the indexed bit of an int
 * @n: int
 * @index: index number
 * Return: the bit found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int d, result;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	d = 1;
	d <<= index;
	result = n & d;
	if (result == 0)
		return (0);
	return (1);
}
