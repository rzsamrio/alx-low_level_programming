#include "main.h"
/**
 * _memcpy - fills memory with n constant bytes
 * @dest: address of copied memory to return
 * @src: address of source memory
 * @n: no. of mem slots to copy
 * Return: address of filled memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dhead;
	char *shead;

	shead = src;
	for (dhead = dest; src < (shead + n); src++, dest++)
	{
		*dest = *src;
	}
return (dhead);
}
