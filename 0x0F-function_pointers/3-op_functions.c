#include "3-calc.h"

/**
 * op_add - adds
 * @a: var 1
 * @b: var 2
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: var 1
 * @b: var 2
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: var 1
 * @b: var 2
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divisor
 * @a: var 1
 * @b: var 2
 * Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder
 * @a: var 1
 * @b: var 2
 * Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
