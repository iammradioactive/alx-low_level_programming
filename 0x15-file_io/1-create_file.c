#include "main.h"
/**
 * create_file - create file with text content
 * @filename: file to be created
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	length = 0;
	while (text_content[length] != '\0')
	length++;

	result = write(fd, text_content, length);
	if (result == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
