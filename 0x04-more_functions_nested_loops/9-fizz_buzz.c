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
 */

void fizzbuzz(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if(x > 9)
{
_putchar((x /10) + '0');
}
_putchar( (x % 10) + '0');
_putchar(32);

if ( x % 3 == 0)
{
x =_putchar('f');
x_putchar('i');
_putchar('z');
_putchar('z');
}
else if (x % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
}
