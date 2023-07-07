#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 clas
 * @argc: number of cla including program name
 * @argv: array containing cla
 * Return: 0 on completion
*/

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
