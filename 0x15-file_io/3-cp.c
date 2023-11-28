#include "main.h"
#define BUF_SIZE 1024
/**
 * error_file - check if file can be opened
 * @fd_from: file from
 * @fd_to: file to
 * @argv: argument vector
 */

void error_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
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
	int fd_from, fd_to;
	ssize_t read_result, write_result;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fd_from fd_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fd_from, fd_to, argv);
	while (read_result == BUF_SIZE)
	{
		read_result = read(fd_from, buffer, BUF_SIZE);
		if (read_result == -1)
			error_file(-1, 0, argv);
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
			error_file(0, -1, argv);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
