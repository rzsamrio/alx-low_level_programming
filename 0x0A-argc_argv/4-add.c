#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sum up all cla
 * @argc : number of cla
 * @argv : cla
 * Return: 0 on completion
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(argv[i]);
		}
	printf("%i\n", sum);
	return (0);
}
