#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - handle error
 * @code: integer
 * @message: pointer
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: iteger
 * @argv: array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
	file_from = argv[1];
	file_to = argv[2];
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
		error_exit(98, "Error: Can't read from file");

	fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");
	if (close(fd_source) == -1 || close(fd_dest) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	return (0);
}
