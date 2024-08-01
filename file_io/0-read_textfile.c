#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * reads a text file and prints it to the POSIX standard output.
 * @letters: The number of letters to read and print.
 * @filename: The name of the file to read.
 * Return: The actual number of letters it could read and print.
 * Returns 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t bytes_read, bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}

	bytes_read = read(file_des, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_des);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	free(buffer);
	close(file_des);
	return (bytes_read);
}
