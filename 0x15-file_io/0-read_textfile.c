#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t b_read;
	ssize_t d;
	char *buffer;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	d = read(f, buffer, letters);
	b_read = write(STDOUT_FILENO, buffer, d);

	free(buffer);
	close(f);
	return (b_read);
}
