#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 */


void print_triangle(int size)
{
int x, j;
for (x = 1; x <= size; x++)
{
for(j = 1; j <= x; j++)
{
_putchar(' ');
_putchar(35);
}
_putchar('\n');
}
}
