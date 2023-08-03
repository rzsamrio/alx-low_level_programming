#include "main.h"

/**
 * print_binary - prints the binary form of an int
 * @n : int to print
 *
 * Using bitwise operators
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;

	tmp = 0;
	while (n)
	{
		tmp <<= 1;
		if ((n & 1U) == 1)
			tmp++;
		n >>= 1;
	}
	while (tmp)
	{
		if ((tmp & 1U) == 1)
			_putchar('1');
		else
			_putchar('0');
		tmp >>= 1;
	}
}

