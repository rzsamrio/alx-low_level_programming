#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	char *head = s;

	while (*s++ != '\0')
	{
		continue;
		}
		return (s - head - 1);
}

/**
 * _strdup - clones a valid string
 * @str: string to clone
 * Return: address of cloned string & NULL if invalid string was passed
*/

char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *dup;
		int i, size;

		size = _strlen(str);
		dup = malloc(sizeof(char) * size + 1);
		if (dup == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*(dup + i) = str[i];
		return (dup);
	}
	else
		return (NULL);
}
