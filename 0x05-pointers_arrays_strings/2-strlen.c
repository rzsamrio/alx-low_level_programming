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
