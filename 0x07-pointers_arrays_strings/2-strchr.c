#include "main.h"
/**
 * _strchr - searches for a char in a string
 * @c: char
 * @s: string to search
 * Return: a pointer to the first occurence of c
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
