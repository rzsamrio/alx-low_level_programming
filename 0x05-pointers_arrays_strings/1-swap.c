#include "main.h"

/**
 * swap_int - swaps the values of 2 variables
 * @a : variable 1
 * @b: variable 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
