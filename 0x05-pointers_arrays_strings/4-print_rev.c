#include "main.h"

/**
 * print_rev - print reverse of a string
 * @s : string
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		continue;
	for (; len > 0; len--)
		_putchar(*(s + (len - 1)));
	_putchar('\n');
}
