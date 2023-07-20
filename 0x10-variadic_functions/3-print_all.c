#include "variadic_functions.h"

/**
 * print_all - prints all data typess
 * @format: string of data types to print
*/

void print_all(const char * const format, ...)
{
	int i;
	char *temp;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 's':
				temp = va_arg(arg, char *);
				if (temp != NULL)
					printf("%s", temp);
				else
					printf("(nil)");
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	va_end(arg);
	printf("\n");
}
