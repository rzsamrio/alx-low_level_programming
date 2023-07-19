#include "function_pointers.h"

/**
 * print_name - a function that selects the appropriate way to print name
 * @name: string containing name
 * @f: pointer to the specific print function for name that accepts a string
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
