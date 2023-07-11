#include "main.h"

#define BUF_SIZE 1024

/**
 * check97 - ... 
 * @argc: ...
 * Return: ...
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILEN0, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread, nwritten;
	char buffer[BUF_SIZE];

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT \ O_TRUNC);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}

}
