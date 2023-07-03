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
void save_numerical(char *numchar, int *numint);

int _atoi(char *s)
{
	int integer;
	int *pint = &integer;
	char *iterator = s;

	integer = 0;
	while (*iterator)
	{
		if (*iterator == ' ' || *iterator == '+') 	/* skip whitespace */
			iterator++;
		else if (*iterator == '-') /* negative? */
		{
			s = iterator;
			iterator++;
			if (*iterator >= '0' && *iterator <= '9') /* numeric? */
				save_numerical(iterator, pint);
			else
				break;
		}
		else if (*s >= '0' && *s <= '9') /* on positive */
		{
			save_numerical(iterator, pint);
		}
		else
			break;
		iterator++;
		_putchar('\n');
		_putchar(*iterator);
	}
	if (*s == '-')
		return (integer *= -1);
	return (integer);
}


void save_numerical(char *numchar, int *numint)
{
		if (*numint > 0)
		{
			*numint *= 10; 
			*numint += (*numchar - '0');
		}
		else
			*numint += (*numchar - '0');
}
