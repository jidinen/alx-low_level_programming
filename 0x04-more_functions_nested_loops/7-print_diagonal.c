#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void print_diagonal(int n)
{
int c;
int spaces;
c = 0;
while (c < n)
{ 
for(spaces = 0; spaces <= c; spaces++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
c++;
}
_putchar('\n');
}
