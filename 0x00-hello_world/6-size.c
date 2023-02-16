/*
 * main - prints systedata type sizem
 * @void: takes no input
 * Return: 0 on exit
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %li\n", sizeof(char));
	printf("Size of a int: %li\n", sizeof(int));
	printf("Size of a long int: %li\n", sizeof(long int));
	printf("Size of a long long int: %li\n", sizeof(long long int));
	printf("Size of a float: %li\n", sizeof(float));

	return (0);
}
