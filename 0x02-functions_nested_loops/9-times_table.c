#include "main.h"
#include <stdio.h>

/**
 *times_table - print the times table from 0-9
 *
 *
 *
 *Returns: void 
 *
 *
 *
 *
 *
 *
 *
 */

void times_table(void)
{
int i;
int j;
int result;
int x;
int y;
for (i =0; i <= 9; i++)
{
for (j = 0; j <= 9; i++)
{
result = i*j;
if (result > 9)
{
x = result % 10;
y = (y-x) / 10;
_putchar(44);
_putchar(32);
_putchar(y + 'O');
_putchar(x + 'O');
}
else if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(result + 'O');
}
}
_putchar('\n');
}

