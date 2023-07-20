#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of ints
 * @separator: chars that come in between the ints
 * @n: number of ints
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, temp;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(num, int);
		printf("%d", temp);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
