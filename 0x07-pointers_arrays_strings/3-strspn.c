#include "main.h"

/**
 * _strspn - returns the number of bytes of accept in the prefix of s
 * @s: string to screen
 * @accept: char to screen for
 * Return: no of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
    char *head;
    int length;

    head = s;
    length = 0;
    while(*s++)
    {
        if (*accept++ == 0)
            break;
        if(*s == ' ')
            break;
        if (*s == *accept)
        {
            length++;
        }
        if (*(s+1) == '\0' && *(accept+1) != '\0')
        {
            s = head;
            accept++;
        }
    }
    return (length);
}