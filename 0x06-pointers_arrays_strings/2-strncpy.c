#include "main.h"

/**
 * _strcpy - copies strings
 * @dest : destination strings
 * @src : string to copy
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
    dest[n] = '\0';
	return (dest);
}

