#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t w;

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(f, text_content, strlen(text_content));
		if (w == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
