#include "stdio.h"

/**
 * main - print the number of cla
 * @argc : number of cla
 * @argv : array of string
 * Return: 0 on completion
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%i\n", argc - 1);
	return (0);
}

