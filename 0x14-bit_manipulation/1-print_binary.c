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
	int czero, c;

	tmp = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (czero = 0, c = 0; n > 0;)
	{
		tmp <<= 1;
		if ((n & 1U) == 1)
		{
			c = 1;
			tmp++;
		}
		else
		{
			if (c == 0)
				czero++;
		}
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
	for (c = 0; c < czero; c++)
		_putchar('0');
}

