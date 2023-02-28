#include "main.h"

/** 
 * swap_int - swap 2 variables
 * @a: number 1
 * @b - variable 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
