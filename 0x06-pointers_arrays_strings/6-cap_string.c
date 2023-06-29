#include "main.h"
int check_array(char c, char *group);

/**
 * cap_string - Capitalise a string
 * @a: string to Capitalise
 * Return: address of the capitalised string
 */

char *cap_string(char *a)
{
	int i;
	char set[] = " ;!?\")({},.\t\n";

	for (i = 0; a[i] != '\0'; i++)
	{
		/* Capitalize first letter */
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;
		}
		/* Check for sentence enders then uppercase the next letter*/
		if (check_array(a[i], set))
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
	}
	return (a);
}

/**
 * check_array - Search a string for a character
 * @c: character to search for
 * @group: string to search in
 * Return: 1 if found, 0 if not
 */

int check_array(char c, char *group)
{
	int i;

	for (i = 0; group[i] != '\0'; i++)
	{
		if (c == group[i])
			return (1);
	}
	return (0);
}
