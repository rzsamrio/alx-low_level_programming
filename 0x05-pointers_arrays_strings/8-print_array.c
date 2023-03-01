#include <stdio.h>

/**
 * print_array - print some elements of an array
 * @a: pointer to intial element of array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", *(a + i));
		else
			printf("%i", *(a + i));
	}
	printf("\n");
}
