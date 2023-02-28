#include "main.h"

/**
 * _strlen - gets string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		continue;
	return (len);
}
