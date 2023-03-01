#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, length, times;
	char temp;

	length = 0;
	/* Gets string length */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	/* protect against reswapping reversed string */
	times = (length + 1) / 2;

	/* reverse the string */
	for (i = 0; times  > 0; i++, length--, times--)
	{
		temp = s[i];
		s[i] = s[length - 1];
		s[length - 1] = temp;
	}
}
