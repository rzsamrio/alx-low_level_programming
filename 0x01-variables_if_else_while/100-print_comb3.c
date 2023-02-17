/**
 * main - different combinations of numbers
 * @void: no cli required
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
