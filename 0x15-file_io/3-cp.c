#include "main.h"
/**
 * error_file - check if file can be opened
 * @file_from: file from
 * @file_to: file to
 * @argv: argument vector
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_result, write_result;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	while (read_result > 0)
	{
		read_result = read(file_from, buffer, 1024);
		if (read_result == -1)
			error_file(-1, 0, argv);
		write_result = write(file_to, buffer, read_result);
		if (write_result == -1)
			error_file(0, -1, argv);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
