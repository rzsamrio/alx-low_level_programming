#include "main.h"

/**
 * 
*/

/** Pseudocode
 *  save reverse string in an array with recursion
 *  write function that compares 2 strings and returns 1 if equal
 *  compare 2 strings 
 * 
 * Learnt more about the memory allocation on the stack (aka static malloc) while working this
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

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
		return (1 + _strlen(++s));
}

int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	else
		return (1 * _strcmp(++s1, ++s2));
}

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