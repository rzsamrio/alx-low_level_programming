#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	char *head = s;

	for ( ; *s != '\0';)
	{
		s++;
	}
	return (s - head);
}

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: the address of the catenated string
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, length;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = _strlen(s1) + _strlen(s2);
	cat = malloc((sizeof(char) * length) + 1);
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		cat[i] = s1[i];
	for (j = 0; (j + i) < length; j++)
		cat[i + j] = s2[j];
	cat[length] = '\0';
	return (cat);
}
