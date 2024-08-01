#include "main.h"

/**
 * create_file - creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;
	mode_t file_perm = S_IRUSR | S_IWUSR;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_perm);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_write = write(fd, text_content, len);

		if (bytes_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
