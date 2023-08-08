#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - copies a file into another
 * @argc : no of cla
 * @argv: string of cla containg file names
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fdf, fdt;
	ssize_t len, rc, wc, buf_size;
	char *buffer;

	buf_size = 1024;
	if (argc != 3)
		err_msg(97, NULL);
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
		err_msg(98, argv[1]);
	buffer = malloc(buf_size);
	if (buffer == NULL)
		return (1);
	for (rc = 0; (len = read(fdf, buffer, buf_size)) > 0; rc += len)
	{
		if (len == buf_size)
			buf_size *= 2;
		buffer = realloc(buffer, buf_size);
		if (buffer == NULL)
			return (1);
	}
	if (len == -1)
	{
		free(buffer);
		close(fdf);
		err_msg(98, argv[1]);
	}
	fdt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdt == -1)
		err_msg(99, argv[2]);
	wc = write(fdt, buffer, rc);
	if (wc != rc)
		err_msg(99, argv[2]);
	free (buffer);
	return (0);
}

/**
 * err_msg - prints an error message
 * @err_flag: exit code
 * @s: string to print
 */
void err_msg(int err_flag, char *s)
{
	switch (err_flag)
	{
		case (-1):
			free(s);
			dprintf(2, "Error: Can't write to %s\n", s);
			exit(98);
		case (97):
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(97);
		case (98):
			dprintf(2, "Error: Can't read from file %s\n", s);
			exit(98);
		case (99):
			dprintf(2, "Error: Can't write to %s\n", s);
			exit(99);
	}
}

