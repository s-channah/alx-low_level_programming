#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @s: pointer to memory where you'd put constant byte
* @b: constant byte used
* @n: number of byte of memory area pointed to @s to place with @b
* Return: pointer to memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
