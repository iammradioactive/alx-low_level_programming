#include "main.h"
/**
 * read_textfile - read a text file and print the letters
 * @filename: name of file to read
 * @letters: number of letters to read and print
 * Return: number of letters to print, 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(fd, buffer, letters);
	close(fd);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	free(buffer);
	if (_write != _read)
		return (0);

	return (_write);

}
