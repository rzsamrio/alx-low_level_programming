#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of variables
 * @n: number of variables to sum
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list num;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
