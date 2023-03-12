#include "stdio.h"

/**
 * main - print the program name
 * @argc : number of cla
 * @argv : array of string
 * Return: 0 on completion
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

