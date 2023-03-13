#include <stdlib.h>

/**
 * str_concat - catenate 2 strings into a new string
 * @s1: first string
 * @s2: second string
 * Return: address of catenated string
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		long l1, l2, l, i;
		char *cat;

		for (l1 = 0; s1[l1] != '\0'; l1++)
			continue;
		for (l2 = 0; s2[l2] != '\0'; l2++)
			continue;

		l = l1 + l2;
		cat = malloc(l);

		for (i = 0; i < l; i++)
		{
			if (i < l1)
				cat[i] = s1[i];
			else
				cat[i] = s2[i - l1];
		}
		return (cat);
	}
	else
		return (NULL);
}

