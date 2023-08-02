#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int bin, decimal;

	len = _strlen(b);
	for (i = 0, decimal = 0; i < len; i++)
	{
		decimal = i +
	}
	return (bin);
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

int _pow(int base, int exponent)
{
	int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
}

int main(void)
{
	printf("%d %d %d\n", _pow(2,5), _pow(3, 0), _pow(16, 7));
	return (0);
}