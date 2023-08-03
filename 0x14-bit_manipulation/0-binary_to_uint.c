#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned decimal
 * @b: string
 * Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	int n, len;
	unsigned int bin, decimal;

	len = _strlen(b);
	bin = stringbint(b);
	if (bin == 0)
		return (0);
	decimal = 0;
	while (len != 0)
	{
		n = ((bin / _pow(10, len - 1)) % 10);
		n *= _pow(2, len - 1);
		decimal += n;
		len--;
	}
	return (decimal);
}

/**
 * _strlen - fins the length of a string using recursion
 * @s: string to count
 * Return: the length of a string
*/

int _strlen(const char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
		return (1 + _strlen(++s));
}

/**
 * _pow - performs the power operation
 * @base: base number
 * @exponent: exponent
 * Return: power
*/
int _pow(int base, int exponent)
{
	int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
}

/**
 * stringbint - converts a binary string to a binary integer
 * @s: binary string to convert
 * Return: integer
*/
unsigned int stringbint(const char *s)
{
	unsigned int number;
	int len, i;

	len = _strlen(s);
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '1')) /* only allows bits*/
			return (0);
		number += (s[i] - '0') * _pow(10, len - 1);
		len--;
	}
	return (number);
}
