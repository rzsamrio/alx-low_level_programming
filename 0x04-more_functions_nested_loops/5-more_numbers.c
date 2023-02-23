#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int n, i, j, v;

	for (v = 0; v < 10; v++)
	{
		for (n = 0; n < 15; n++)
		{
			i = n / 10;
			j = n % 10;

			if (i != 0)
				_putchar(i + '0');
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
