#include "main.h"
/**
 * _memcpy - fills memory with n constant bytes
 * @dest: address of copied memory to return
 * @b: address of source memory
 * @n: no. of mem slots to copy
 * Return: address of filled memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *head;

    head = src;
    while(src++ < (head + n))
    {
        *dest = *src;
    }
return (dest);
}
