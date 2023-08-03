#include "main.h"

void print_binary(unsigned long int n)
{
	if (n > _pow(w, 8))
	{
		putchar(0);
	}


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
