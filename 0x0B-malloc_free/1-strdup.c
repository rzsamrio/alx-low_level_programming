#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: Address of new string, NULL if str is empty
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		long length, i;
		char *dup;

		for (length = 0; *(str + length) != '\0'; length++)
			continue;
		dup = malloc(length);
		for (i = 0; i < length; i++)
			dup[i] = str[i];
		return (dup);
	}
	else
		return (NULL);
}
