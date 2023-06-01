#include "main.h"
/**
* _strncat- concatenates special characters value(s) from src to dest
* @dest: The destination to append string/character(s) value
* @src: The source string
* @n: Number of bytes representing characters from src to append to des
* Return: A pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
