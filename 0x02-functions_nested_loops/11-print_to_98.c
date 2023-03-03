#include "main.h"

/**
 * print_to_98 - prints all numbers till 98
 * @n: starting value
 *
 */

void print_to_98(int n)
{
	int i, j, c, num[10];

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			i = n;
			
			/* store number as individual characters */
			for (j = 0, c = 0; i != 0; j++, c++)
			{
				num[j] = i % 10;
				i /= 10;
			}

			/* Print numbers */
			for (j = c - 1; j >= 0; j--)
				_putchar(num[j] + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else
	{
		for (; n <= 98; n++)
		{
			i = n;

			/* store number as individual characters */
			for (j = 0, c = 0; i != 0; j++, c++)
			{
				num[j] = i % 10;
				i /= 10;
			}

			/* Print numbers */
			for (j = c - 1; j >= 0; j--)
				_putchar(num[j] + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}

/**
 * Code doesn't print 0 and doesn't allow negative numbers */
