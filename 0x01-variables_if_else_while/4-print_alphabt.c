#include <stdio.h>

/**
 * main - print lowercase alphabet except e and q
 * @void: no cla
 * Return: 0 on completion
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			i++;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
