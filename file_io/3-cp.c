#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits with a given code.
 * @code: The exit code.
 * @message: The error message format string.
 * @filename: The filename to include in the error message.
 */

void print_error_and_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * open_file - Opens a file with specified flags and mode.
 * @filename: The name of the file to open.
 * @flags: The flags to use for opening the file.
 * @mode: The mode to use if a new file is created.
 *
 * Return: The file descriptor on success, exits on failure.
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);
	
	if (fd == -1)
	{
		if (flags & O_RDONLY)
			print_error_and_exit(98, "Error: Can't read from file %s\n", filename);
		else
			print_error_and_exit(99, "Error: Can't write to %s\n", filename);
	}
	return fd;
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		char fd_str[12];
		snprintf(fd_str, sizeof(fd_str), "%d", fd);
		print_error_and_exit(100, "Error: Can't close fd %d\n", fd_str);
	}
}

/**
 * copy_content - Copies content from one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */

void copy_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit(99, "Error: Can't write to file\n", NULL);
	}
	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file\n", NULL);
}

/**
 * main - Entry point for the file copy program.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 * Return: 0 on success, exits with error code on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	copy_content(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return 0;
}

