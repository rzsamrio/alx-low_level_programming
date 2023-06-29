#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to an array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
