/**
 * main - prints the alphabets on a line in reverse
 *@void: no input required
 *
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
