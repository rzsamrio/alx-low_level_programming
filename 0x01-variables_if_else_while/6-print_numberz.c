#include <stdio.h>

/**
 * main - print numbers
 * @void: no cla
 * Return: 0 on completion
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
