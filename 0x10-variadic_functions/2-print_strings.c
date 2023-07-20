#include "variadic_functions.h"

/**
 * print_strings - prints some strings
 * @separator: string between strings
 * @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *temp;
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(str, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}

