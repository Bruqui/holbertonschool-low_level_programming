#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

void print_error_and_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_file(file_from);
			close_file(file_to);
			print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	close_file(file_from);
	close_file(file_to);

	return (0);
}
