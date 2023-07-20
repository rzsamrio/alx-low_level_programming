#include "variadic_functions.h"

/**
 * print_all - prints all data typess
 * @format: string of data types to print
*/

void print_all(const char * const format, ...)
{
	type formats[] = {
		{'c', 0},
		{'i', 0},
		{'f', 0},
		{'s', 0}
	};
	int i, j;
	int temp;
	va_list arg;

	va_start(arg, format);
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c': (char) temp = va_arg(arg, char);
				break;
		}
		switch (expression)
		{

	}
}