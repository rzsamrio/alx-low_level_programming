#include "main.h"

/**
 * save - saves a copy of a string using recursion
 * @s: address of string to clone
 * @fwd: address of copied string
*/

void save(char *s, char *fwd)
{
	if (!*s)
	{
		*fwd = '\0';
		return;
	}
	save(s + 1, fwd + 1);
	*fwd = *s;
}

/**
 * rsave - reverses and stores a string using recursion
 * @head: saved address of the first byte of the original string
 * @s: original string address that becomes mobile
 * @rev: address of the stored reverse string
*/

void rsave(char *head, char *s, char *rev)
{
	if (s < head)
	{
		*rev = '\0';
		return;
	}
	rsave(head, s - 1, rev + 1);
	*rev = *s;
}

/**
 * _strlen - calculates the length of a string via recursion
 * @s: the address of the string
 * Return: string length
*/

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
		return (1 + _strlen(++s));
}

/**
 * _strcmp - checks if 2 strings are identical
 * @s1: address of first string
 * @s2: address of the second string
 * Return: 0 if false, 1 if true
*/

int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	else
		return (1 * _strcmp(++s1, ++s2));
}

/**
 * is_palindrome - the main function, checks if a string is a palindrome
 * @s: address of string to screen
 * Return: 1 if true and 0 if not
*/
int is_palindrome(char *s)
{
	char rev[500];
	char copy[500];
	int n;
	char *head;

	head = s;
	n = _strlen(s) - 1;
	save(s, copy);
	rsave(head, s + n, rev);
	if (_strcmp(copy, rev))
		return (1);
	else
		return (0);
}

/**
 * Pseudocode
 * save reverse string in an array with recursion
 * write function that compares 2 strings and returns 1 if equal
 * compare 2 strings
 *
 * Learnt more about the memory allocation on the stack (aka static malloc)
 * while working this
*/
