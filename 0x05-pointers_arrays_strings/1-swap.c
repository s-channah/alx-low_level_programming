#include "main.h"
/**
*  swap_int - swaps value of variable int a and int b
*  @a: address of int a/pointer 1
*  @b: address of int b/pointer 2
*  Return: nothing
*/
void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}
