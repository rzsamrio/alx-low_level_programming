/**
 * main - different combinations of 3 digit numbers
 * @void: no cli required
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int i, j, z;

	for (i = '0'; i < '8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (z = j + 1; z <= '9'; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
