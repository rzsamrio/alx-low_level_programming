#include "main.h"

/**
 *
 */

void times_table(void)
{
	int i, j, a, b, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			a = product / 10;
			b = product % 10;

			if (product > 10)
				_putchar(a + '0');
			_putchar(b + '0');
			_putchar(',');
			if (product < 10 && )
