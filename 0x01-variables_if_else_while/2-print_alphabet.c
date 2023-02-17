/**
 * main - prints the alphabets on a line
 *@void: no input required
 *
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
