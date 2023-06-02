/**
* _strcmp- compares two strings
* @s1: first string
* @s2: second string
* Return: The difference between @s1 and @s2 ASCII values
*/
int _strcmp(char *s1, char *s2);
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
