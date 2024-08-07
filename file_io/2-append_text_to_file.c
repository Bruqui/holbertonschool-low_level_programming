#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_write = write(fd, text_content, len);

		if (bytes_write == -1)
		{
			close(-1);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
