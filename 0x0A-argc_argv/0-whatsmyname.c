#include <stdio.h>

/**
 * main - prints the name of the program followed by '\n'
 * @argc: this the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
