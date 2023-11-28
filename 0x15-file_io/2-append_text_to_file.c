#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: added content
 * Return: 1 on success, -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, length;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		result = write(fd, text_content, length);

		if (result == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
