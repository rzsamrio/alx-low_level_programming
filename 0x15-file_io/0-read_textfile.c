#include "main.h"

/**
 * 
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char buffer[MAX_LEN];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, &buffer, letters);
	if (count == -1)
		return (0);
	count = write(fd, &buffer, count);
	return (count);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
