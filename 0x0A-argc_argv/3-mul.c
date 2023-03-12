#include <stdio.h>
#include <stdlib.h>

/**
 * main - multtiply 2 cla
 * @argc : number of cla
 * @argv : cla
 * Return : 0 on completion
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
