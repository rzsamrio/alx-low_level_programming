#include <stdio.h>
#include <stdlib.h>

/**
 * main - print system data packets size
 * @void: no inputs
 * Return: 0 on completion
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
