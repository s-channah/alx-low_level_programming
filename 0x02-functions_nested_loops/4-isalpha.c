#include "main.h"
/**
*  _isalpha - checks for alphabets
*  @c: first parameter to be checked
*  Return: 1 if an alphabetical character, 0 if otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
