#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n *= -1;
	m = n % 10;
	if (m < 0)
		m *= -1;
	_putchar(m + 48);
	return (m);
}
