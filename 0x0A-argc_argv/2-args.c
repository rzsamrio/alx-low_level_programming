#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of cla including program name
 * @argv: array containing cla
 * Return: 0 on completion
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
