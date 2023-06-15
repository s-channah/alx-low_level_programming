#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of @s2 to add to @s1 to make new string
 * Return: new string or NULL if function fails
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (s1 == NULL)
		x = 0;

	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}


	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}

	if (n > y)
		n = y;

	s = malloc(sizeof(char) * (x + n + 1));

	if (s == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		s[z] = s1[z];

	for (z = 0; z < n; z++)
		s[x + z] = s2[z];

	s[x + n] = '\0';

	return (s);
}
