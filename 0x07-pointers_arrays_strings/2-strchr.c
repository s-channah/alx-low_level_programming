#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located in the searched string
 * Return: pointer to the first character occurence or Null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
