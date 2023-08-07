#include "main.h"
#include <unistd.h>

/**
 * read_textfile - prints a text file
 * @filename: name of file
 * @letters: no of chars to print
 * Return: no of chars printed, or 0 on error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rc, wc;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rc = read(fd, buffer, letters);
	if (rc == -1)
	{
		close(fd);
		return (0);
	}
	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc != rc)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wc);
}

