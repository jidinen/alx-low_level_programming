#include "main.h"

/**
 *print_last_digit -print the last digit of a number
 *
 *
 *@x : as the parameter for the function
 *
 *Return: the digit of a number
 *
 *
 *
 */
int print_last_digit(int x)
{
int lastdigit = x % 10;
if (lastdigit < 0)
{
lastdigit *= -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}

