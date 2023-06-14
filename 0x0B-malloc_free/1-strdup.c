#include "main.h"
#include <stdlib.h>

/**
 * _strdup - It duplicates a string
 * @str: The input string to duplicate
 * Return: pointer to duplicated string or NULL if str == NULL/malloc() failed
 */

char *_strdup(char *str)
{
	char *duplicate;

	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	len += 1;

	duplicate = (char *)malloc(sizeof(char) * len);

	if (duplicate == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
