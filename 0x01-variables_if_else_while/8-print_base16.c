/**
 * main - prints base 16 digits on a line
 *@void: no input required
 *
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
