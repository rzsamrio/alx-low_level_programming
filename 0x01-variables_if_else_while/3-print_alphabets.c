#include <stdio.h>

/**
 * main - print both cases alphabets
 * @void: no cla
 * Return: 0 on completion
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
