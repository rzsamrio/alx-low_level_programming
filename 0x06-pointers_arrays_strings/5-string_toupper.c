#include "main.h"

/**
 * string_toupper - Convert string characters to uppercase
 * @a: string to Convert
 * Return: Pointer to the modified string a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}

	return (a);
}
