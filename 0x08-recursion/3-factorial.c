#include "main.h"

/**
 *factorial - prints the factorail of n
 *
 *@n: an interger
 *
 *
 *
 *Return: the factorial of the number
 *
 *
 *
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
