#include "main.h"

/**
 * rev_string - reverse a string
 * @s : string
 */

void rev_string(char *s)
{
	int len, l, i;

	for (len = 0; *(s + len) != '\0'; len++)
		continue;
	char temp[len];

	for (i = 0, l = len; l > 0; l--, i++)
		temp[i] = *(s + (l - 1));
	for (i = 0; i < len; i++)
	{
		*(s + i) = temp[i];
	}
}
