#include "main.h"
/**
* _memcpy - copies
*  @dest: memory area that is the destination.
*  @src: memory to source bytes
*  @n:length of bytes to copy to dest
*  Return: pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
