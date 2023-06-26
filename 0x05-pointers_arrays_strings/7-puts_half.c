#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; *(str + len) != '\0'; len++)
		continue;

	if (len % 2 == 1)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = len - n; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
