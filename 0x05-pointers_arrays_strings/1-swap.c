#include "main.h"

/**
 *swap_int - swaps the a,b
 *
 *@a: the functions receives a pointer as an argument
 *
 *@b: the second paramater
 *
 *
 *Return: none
 *
 *
 *
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

