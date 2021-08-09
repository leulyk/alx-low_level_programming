#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include "holberton.h"

long _strlen(char *str);
/**
 * create_file - create a file
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Description: the created file must have the file permission rw-------
 *		If file already exist, do not change the permission
 *		If file already exist, truncate it
 *		If text_content is null, create an empty file
 *
 * Return: 1 on success, -1 if filename is NULL, file can not be created,
 * file cannot be written, write fails, ...
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	long length, write_count;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = _strlen(text_content);
		write_count = write(fd, text_content, length);
		if (write_count == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

/**
 * _strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: length of the string
 */
long _strlen(char *str)
{
	long length;

	length = 0;
	while (*(str + length))
		length++;
	return (length);
}
