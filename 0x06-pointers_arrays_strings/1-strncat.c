#include "main.h"
int _strlen(char *str);

/**
 * _strncat - concatenates 2 strings
 * @dest : destination strings
 * @src : string to copy
 * @n : number of bytes to add
 * Return: a filled destination string
 */

char *_strncat(char *dest, char *src, int n){
	int length;
	int i;

	length = _strlen(dest) + n;
	for (i = _strlen(dest); i < length && *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
    dest[length] = '\0';
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
