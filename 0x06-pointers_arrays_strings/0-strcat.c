#include "main.h"
/**
* _strcat - concatenates @src to @dest
* @dest: destination string to be concatenated upon
* @src: source string to append to @dest
* Return: pointer to resulting string that is @dest
*/
char *_strcat(char *dest, char *src)
{        int index;
int dest_len = 0;
for (index = 0; dest[index]; index++)
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
