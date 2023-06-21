#include "main.h"

/**
 * print_sign - printd the sign of numbers
 * @n: number
 *
 * Return: 0, + or -
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
