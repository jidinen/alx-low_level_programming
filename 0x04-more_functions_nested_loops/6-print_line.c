#include "main.h"

/**
 *print number of line base on parameter
 *
 *@n: the number of lines should be printed
 *
 *Return: void
 *
 *
 *
 */
void print_line(int n)
{
int x;
int j;
x = 0;

j = 0;
j = 95;
while (x < n)
{
if (n == 0)
{
_putchar('\n');
}
x++;
_putchar(j);

}
_putchar('\n');
}
