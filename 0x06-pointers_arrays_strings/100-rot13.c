#include "main.h"
7
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 13;
			if (a[i] > z)
