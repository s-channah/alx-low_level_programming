#include "main.h"
/**
*  _puts - prints a string and new line
*  @str: pointer to string to be printed
*  Return: nothing
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}