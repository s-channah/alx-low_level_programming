#include "main.h"

/**
* print_alphabet_x10- print lowercase alphabet ten times with new line
*/

void print_alphabet_x10(void)
{
int count = 0;
char i;

while (count++ <= 9)
{
for (i = 0; i <= 9; i++)
_putchar(i);
-_putchar('\n');
}
}
