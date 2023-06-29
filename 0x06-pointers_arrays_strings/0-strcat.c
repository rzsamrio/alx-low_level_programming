#include "main.h"
int _strlen(char *str);

/**
 * _strcat - concatenates 2 strings
 * @dest : destination strings
 * @src : string to copy
 * Return: a filled destination string
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	length = _strlen(dest) + _strlen(src);
	for (i = _strlen(dest); i < length; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}

/**
 * _strlen - gets the length of strings
 * @str : address of string
 * Return: length
 */

int _strlen(char *str)
{
	char *i; /* iterator pointer */

	i = str;
	while (*i)
		i++;
	return (i - str);
}
