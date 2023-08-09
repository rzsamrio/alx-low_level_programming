#include "main.h"

/**
 * append_text_to_file - writes to the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: -1 on err, 1 of SUCCESS
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (*text_content != '\0')
	{
		if (write(fd, text_content, 1) != 1)
		{
			close(fd);
			return (-1);
		}
		text_content++;
	}
	close(fd);
	return (1);
}
