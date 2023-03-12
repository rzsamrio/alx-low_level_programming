#include "stdio.h"

/**
 * main - print each cla on new line
 * @argc : number of cla
 * @argv : array of string
 * Return: 0 on completion
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

