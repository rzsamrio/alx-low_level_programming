#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tests state of last digit of number
 * @void: no inputs required
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (last == 0)
		printf("Last digit of %d is %i and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, last);
	else
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
