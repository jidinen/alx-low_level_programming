#include "main.h"

/**
 *print_sign - checks if number is negative or positive
 *
 *
 *
 *@n: function takes one parameter
 *
 *
 *
 *Return: 1 for positive,0 for zero , -1 negative
 *
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
return (n);
}
