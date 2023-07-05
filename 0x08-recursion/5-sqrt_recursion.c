#include "main.h"

/**
 * squarec - checks for the sqrt with recursion and an iterator
 * @n: number
 * @i: iterator
 * Return: the square root, -1 if none
*/
int squarec(int n, int i)
{
	int square;

	square = i * i;
	if (square > n)
		return (-1);
	else if (square == n)
		return (i);
	else
		return (squarec(n, i + 1));
}

/**
 * _sqrt_recursion - calls squarec
 * @n: number
 * Return: the square root, -1 if none
*/
int _sqrt_recursion(int n)
{
	return (squarec(n, 0));
}
