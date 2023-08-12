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
	int fdf, fdt, stat;
	ssize_t len, rc, wc, buf_size;
	char *buffer, *tmp;

	buf_size = 1024;
	if (argc != 3)
		err_check(-1, 97, NULL);
	fdf = open(argv[1], O_RDONLY);
	err_check(fdf, 98, argv[1]);
	buffer = malloc(buf_size);
	if (buffer == NULL)
		return (1);
	for (rc = 0; (len = read(fdf, &buffer[rc], 1024)) > 0;)
	{
		rc += len;
		stat = close_buffer(len, fdf, 0, buffer);
		err_check(stat, 98, argv[1]);
		if (rc == buf_size)
		{
			buf_size *= 2;
			tmp = realloc(buffer, buf_size);
			if (tmp == NULL)
			{
				free(buffer);
				return (1);
			}
			buffer = tmp;
		}
	}
	buffer[rc] = '\0';
	fdt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	stat = close_buffer(fdt, fdf, 0, buffer);
	err_check(stat, 99, argv[2]);
	wc = write(fdt, buffer, rc);
	close_buffer(-1, fdf, fdt, buffer);
	if (wc != rc)
		err_check(-1, 99, argv[2]);
	return (0);
}

/**
 * err_check - prints an error message
 * @status: checks if function should run
 * @err_flag: exit code
 * @s: string to print
 */
void err_check(int status, int err_flag, char *s)
{
	if (status != -1)
		return;
	switch (err_flag)
	{
		case (97):
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(99);
	}
}

/**
 * close_buffer - closes an fd and frees a buffer
 * @stat: checks if function should perform
 * @fd: file descriptor
 * @fd2: second file descriptor if necessary
 * @buffer: dynamic string
 * Return: exit on fail, -1 on close
 *
 * Returns 0 if it shouldn't close
 */

int close_buffer(int stat, int fd, int fd2, char *buffer)
{
	int status;

	if (stat != -1)
		return (0);
	free(buffer);
	if (fd != 0)
	{
		status = close(fd);
		if (status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
			exit(100);
		}
	}
	if (fd2 != 0)
	{
		status = close(fd2);
		if (status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
			exit(100);
		}
	}
	return (-1);
}
