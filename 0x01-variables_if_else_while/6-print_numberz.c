/**
 * main - prints the numbers on a line using putchar
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
	putchar('\n');

	return (0);
}
