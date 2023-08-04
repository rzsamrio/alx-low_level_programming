#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to get another number
 * @n: first number
 * @m: second number
 * Return: no. of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int res, num;

	diff = n ^ m;
	num = 0;
	while (diff)
	{
		res = diff & 1U;
		if (res == 1)
			num++;
		diff >>= 1U;
	}
	return (num);
}
