/** *_strncpy- copies number of bytes from string src into dest
* @dest: The buffet storing the string copy
* @scr: The source string
* @n: The maximum number of bytes to be copied from src
* Return: A pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i); i++)
*(dest + i) = *(src + i);
for (; i < n; i++)
*(dest + i) = '\0';
return (dest);
}