#include "main.h"

/**
 * divcheck : checks if n is a prime number
 * @n: number
 * @i: iterator
 * Return: 1 if prime and 0 if not
*/
int divcheck(int n, int i)
{
	int div;
	
	if (i == n)
		return (1);
	if (n <= 1)
		return (0);

	div = n % i;
	if (div == 0 )
		return (0);
	else
		return (divcheck(n, i + 1));
}


/**
 * is_prime_number - checks if prime by calling function
 * @n: number
 * Return: 0 if not and 1 if prime
*/

int is_prime_number(int n)
{
	return (divcheck(n, 2));
}
