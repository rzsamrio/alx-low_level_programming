#include "main.h"

/**
 * _memset - initialise a chunk of memory with a character
 * @s: pointer to memory
 * @b: character to be filled
 * @n: number of memory to be filled
 * Return: address of initialised memory
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
