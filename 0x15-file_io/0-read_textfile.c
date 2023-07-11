#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return:...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nwritten;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters;

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	nread = read(fd, buffer, letters);
	nwritten = write(STDOUT_FILENO, buffer, nread);

	if (fd == -1 || nread == -1 || nwritten == -1 || nwritten != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);

	close(fd);

	return (nwritten);
}
