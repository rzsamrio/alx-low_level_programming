#include "main.h"

/**
 * print_rev - print reverse of a string
 * @s : string
 */

void print_rev(char *s)
{
	int len;
	
	len = _strlen(s);	
	for (; len > 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
