#include "main.h"
#include <stdlib.h>

/**
 * str_concat - It concatenates two strings
 * @s1: This is the first string to be concatenated with s2
 * @s2: THis is the second string
 * Return: pointer to a new string containin s1 & s2 or NULL if function fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, cat_i, len1, len2, len;
	char *concated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	cat_i = len1 = len2 = 0;

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	len = len1 + len2 + 1;

	concated = (char *)malloc(sizeof(char) * len);

	if (concated == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concated[cat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concated[cat_i++] = s2[i];

	return (concated);
}
