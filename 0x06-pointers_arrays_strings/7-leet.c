#include "main.h"

/**
 * leet - a kind of cipher that replaces some alphabets with numbers
 * @a: string
 * Return: address of replaced string;
 */

char *leet(char *a)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char sub[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == c[j])
				a[i] = sub[j];
		}
	}
	return (a);
}
