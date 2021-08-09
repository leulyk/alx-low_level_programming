#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print, otherwise
 *		0 if file cannot be opened or read, @filename is NULL
 *		or if write fails or does not write the expected
 *		amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);

	close(fd);
	free(buffer);

	if (read_count != write_count)
		return (0);

	return (write_count);
}
