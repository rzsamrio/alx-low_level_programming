#include "main.h"

/**
 * *argstostr - catenates all arguments in a string with \n
 * @ac: number of command line arguments
 * @av: array containing arguments
 * Return: address of the string
*/

char *argstostr(int ac, char **av)
{
	int i, j, c, length;
	char *argcat;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	/* store total length of chars and individual strings*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
	}
	argcat = malloc((sizeof(char) * length) + (sizeof(char) * ac));
	if (argcat == NULL)
		return (NULL);
	for (i = 0, c = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			argcat[c] = av[i][j];
			c++;
			if (av[i][j + 1] == '\0')
			{
				argcat[c] = '\n';
				c++;
			}
		}
	}
	argcat[length + ac] = '\0';
	return (argcat);
}
