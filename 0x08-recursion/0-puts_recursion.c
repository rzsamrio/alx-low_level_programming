#include "main.h"

/**
 * _puts_recursion - prints a string with a new line
 * @s: string to print
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
