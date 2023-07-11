#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, nwritten = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		nwritten = write(fd, text_content, len);

	close(fd);

	if (nwritten == -1)
		return (-1);

	return (-1);
}
