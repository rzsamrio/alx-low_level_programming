#include "main.h"

/**
 * _strspn - finds the number of bytes of accept in thebfirst part of s
 * @s: the superset string
 * @accept: the subset string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				n++;
		}
	}
	return (n);
}


