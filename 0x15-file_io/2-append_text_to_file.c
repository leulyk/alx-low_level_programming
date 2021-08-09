#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
#include "main.h"

long _strlen(char *str);
/**
 * append_text_to_file - append text to the end of the file
 *
 * @filename: name of the file to append to
 * @text_content: NULL terminated string to append to the file
 *
 * Description: Do not create the file if it doesn't exist
 *		If text_content is NULL, don't add anything
 *
 * Return: 1 on success, -1 if filename is NULL, if file doesn't exist
 * or the file doesn't have permission to write
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	long length, write_count;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content)
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
