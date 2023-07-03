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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
