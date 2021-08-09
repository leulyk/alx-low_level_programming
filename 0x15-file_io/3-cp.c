#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include "holberton.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: command line arguments
 *
 * Description: - A program that copies the content of a file to another file.
 *		- Usage: cp file_from file_to
 *		- Permissions of the created file: rw-rw-r--.
 *		- If the file already exists, do not change the permissions
 *		- Use 1,024 bytes at a time from the file_from
 *		- dprintf is allowed to use
 *
 * Return: 0 (sucess), or exit with status of:
 *	97 - if argc is not correct,
 *	98 - if file_from does not exist or cannot be read from
 *	99 - if unable to create or if write to file_to fails
 *	100 - if unable to close the file descriptor
 *
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	long read_count, write_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || (write_count != read_count))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
