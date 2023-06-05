#include "main.h"

/**
 * 
 * 
 */

char *_strchr(char *s, char c)
{
        {
                if (*s == c)
                {
                        return (s);
                }
                s++;
        }
        return ('\0');
}