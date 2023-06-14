#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: pointer to the array of arguments with size ac
 * Return: a pointer to new string/ NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			count++;

	count = count + ac + 1;

	str = (char *)malloc(sizeof(char) * count);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
