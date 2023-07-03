#include "main.h"
/**
 * _memset - fills memory with n constant bytes
 * @s: memory to fill
 * @b: constant byte
 * @n: no. of mem slots to fill
 * Return: filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
    char *head;

    head = s;
    while(s++ < (head + n))
    {
        *s = b;
    }
return (head);
}
