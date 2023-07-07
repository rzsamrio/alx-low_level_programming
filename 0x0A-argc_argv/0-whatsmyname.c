#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of cla
 * @argv: array containing cla
 * Return: 0 on completion
*/

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
