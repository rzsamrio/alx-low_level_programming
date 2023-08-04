#include "main.h"

/**
 * get_endianness - checks system endian type
 * Return: 0 on big endian, 1 on big endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *p;

	x = 0x124598;
	p = (char *) &x;

	if (*p == 0x98)
		return (1);
	return (0);
}

