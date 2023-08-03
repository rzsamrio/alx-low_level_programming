#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned decimal
 * @b: string
 * Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	int i, n;

	if (b == NULL)
		return (0);
	n = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n++;
		else if (b[i] != '0')
			return (0);
	}
	return (n);
}
