#include "main.h"
void print_more(int i, int n);

/**
 * print_to_98 - prints all numbers till 98
 * @n: starting value
 */
void print_to_98(int n)
{
	int i;

	i = n;
	n = 98;

	if (i <= 98)
	{
		if (i < 0) /* Negative numbers */
		{
			for (; i < 0; i++)
			{
				_putchar('-');
				if (i < -99)
				{
					_putchar((i * -1) / 100 + '0');
					_putchar(((i * -1) / 10) % 10 + '0');
					_putchar(((i * -1) % 10) % 10 + '0');
				}
				else if (i < -9)
				{
					_putchar((i * -1) / 10 + '0');
					_putchar((i * -1) % 10 + '0');
				}
				else
					_putchar((i * -1) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			i = 0;
		}

		for (; i < n + 1; i++) /* positive numbers */
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else /* > 98 */
		print_more(i, n);
	_putchar('\n');
}

/**
 * print_more - prints the values above 98
 * @n: start value
 * @i: iterator
 */

void print_more(int i, int n)
{
	{
		for (; i > n - 1; i--)
		{
			if (i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar((i % 10) % 10 + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
