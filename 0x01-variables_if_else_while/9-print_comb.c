/**
 * main - prints the numbers with syntax on a single line
 *@void: no input required
 *
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
