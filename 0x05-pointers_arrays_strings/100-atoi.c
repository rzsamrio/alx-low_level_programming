#include "main.h"

/**
 * skip whitespaces
 * If non-numeric encountered first, return 0
 * If numeric encountered, begin conversion
 * 	If non-numeric encountered later, return conversion so far.
 *
 *
 *
 */

int _atoi(char *s)
{
	int integer;

	integer = 0;
	while (*s)
	{
		if (*s == ' ') 	/* skip whitespace */
			s++;
		if (*s >= '0' && *s <= '9') /* numeric? */
		{	
			if (integer > 0)
			{
				integer *= 10; 
				integer += (*s - '0');
			}
			else
				integer += (*s - '0');
		}
		else
			break;
		s++;
	}

return integer;
}			
