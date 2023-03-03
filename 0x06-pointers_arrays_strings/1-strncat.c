#include "main.h"

/**
 * _strncat - concatonate 2 strings
 * @dest: destination string
 * @src: string of n bytes added to the destination
 * @n: size of source string
 * Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	for (i = 0, length = 0; dest[i] != '\0'; i++)
		length++;
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
		dest[length] = src[i];
	dest[length + 1] = '\0';
	return (dest);
}
