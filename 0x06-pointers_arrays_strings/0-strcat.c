#include "main.h"

/**
 * _strcat - concatonate 2 strings
 * @dest: destination string
 * @src: to be added to
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, length;

	for (i = 0, length = 0; dest[i] != '\0'; i++)
		length++;
	for (i = 0; src[i] != '\0'; i++, length++)
		dest[length] = src[i];
	dest[length + 1] = '\0';
	return (dest);
}
