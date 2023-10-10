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

#include <stdio.h>


void times_table(void)
{
int i, j, result, x, y;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

if (result > 9)
{
x = result % 10;
y = (result - x) / 10;

_putchar(',');
_putchar(' ');
_putchar(y + '0');
_putchar(x + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(result + '0');
}
}
_putchar('\n');
}
}

