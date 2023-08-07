#include "main.h"

/**
 * create_file - creates a file with content
 * @filename: name of file
 * @text_content: content for file
 * Return: 1 on success, -1 on fail)
 */

int create_file(const char *filename, char *text_content)
{

	int i, wc, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0, wc = 0; *text_content != '\0'; i++)
	{
		wc += write(fd, text_content, 1);
		text_content++;
	}
	if (wc != i)
		return (-1);
	close(fd);
	return (1);
}
