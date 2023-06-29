#include "main.h"

/**
 * _strncpy - copies strings
 * @dest : destination strings
 * @src : string to copy
 * @n : number of bytes to copy
 * Return: a filled destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

