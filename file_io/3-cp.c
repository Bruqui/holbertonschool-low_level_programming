#include "main.h"

/**
  * main - copies the content of a file to another file
  * @argc: number of arguments
  * @argv: array of arguments passed to function
  * Return: 0 on success or exit with error code on failure
  */

int main(int argc, char *argv[])
{
	int og_fd, cp_fd, read_count, write_count;
	char buffer[1024];
	mode_t permission =  0000200 | S_IRUSR | S_IWGRP | S_IROTH | S_IRGRP;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	og_fd = open(argv[1], O_RDONLY);
	if (og_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	cp_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permission);
	if (cp_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	read_count = 1;
	while (read_count)
	{
		read_count = read(og_fd, buffer, 1024);
		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (read_count > 0)
		{
			write_count = write(cp_fd, buffer, read_count);
			if (write_count != read_count || write_count == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(og_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", og_fd), exit(100);
	if (close(cp_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_fd), exit(100);
	return (0);
}
