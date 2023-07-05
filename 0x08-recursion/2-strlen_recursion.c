#include "main.h"

/**
 * _strlen_recursion - fins the length of a string using recursion
 * @s: string to count
 * Return: the length of a string
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return 0;
	}
	else
		return (1 + _strlen_recursion(++s));
}
