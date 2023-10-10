#include "main.h"

/**
 *jack_bauer - prints the hours in the movie 24
 *
 *
 *
 *
 *
 *Return:void
 *
 *
 *
 *
 */

void jack_bauer(void)
{
int i,j;
for(i = 10; i <= 23; i++)
{
for(j = 0; j <= 59; j++)
{
if (i  < 10)
{
_putchar('O');
}
_putchar(i / 10 + 'O');
_putchar(i % 10 + 'O');
_putchar(':');
_putchar(j / 10 + 'O');}
_putchar(j % 10 + 'O');
}
}

