#include "main.h"

/**
 * _strstr - finds a string within a string
 * @haystack : superset
 * @needle : subset
 * Return: address of found subset or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len, start;

	j = 0;
	len = 0;
	for (i = 0; needle[i] != '\0'; i++)
		len++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (j == 1)
				start = i;
		}
		else
			j = 0;

		if (j == len)
			return (start + haystack);
	}

	return (NULL);
}
