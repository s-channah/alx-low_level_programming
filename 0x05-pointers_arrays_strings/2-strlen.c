#include "main.h"
/**
*  _strlen- checks for the length of strings
*  @s: string to be checked
*  Return: int length of the string checked
*/
int _strlen(char *s)
{
int length = 0;
while (s[length])
length++;
return (length);
}
