#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (i = 0, length = 0; src[i] != '\0'; i++)
		length++;
	for (i = 0; i <= length; i++)
		dest[i] = src[i];
	return (dest);
}

