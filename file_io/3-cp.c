#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);
void copy_file(int from, int to, char *buffer);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies the contents of one file to another.
 * @from: The file descriptor of the source file.
 * @to: The file descriptor of the destination file.
 * @buffer: The buffer to use for copying.
 */

void copy_file(int from, int to, char *buffer)
{
	ssize_t r, w;

	do {
		r = read(from, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", from);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(98);
		}

		if (r > 0)
		{
			w = write(to, buffer, r);
			if (w == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %d\n", to);
				free(buffer);
				close_file(from);
				close_file(to);
				exit(99);
			}
		}
	} while (r > 0);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from);
		exit(99);
	}

	copy_file(from, to, buffer);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

