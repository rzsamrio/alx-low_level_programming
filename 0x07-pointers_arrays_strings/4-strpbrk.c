#include "main.h"

/**
 * _strpbrk - finds the first occurrence of a byte from accept in s
 * @s : superset
 * @accept : subset
 * Return: the address of the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

