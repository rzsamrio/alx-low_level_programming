#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
