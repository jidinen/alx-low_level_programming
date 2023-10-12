#include "main.h"

/**
 *print_diagonal - prints lines diagonslly
 *
 *
 *@n: number of spaces
 *
 *
 *Return: void
 *
 *
 */
void print_diagonal(int n)
{
int c;
int spaces;
c = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
for (spaces = 0; spaces < c; spaces++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
