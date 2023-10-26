#include "main.h"
int _f_sqrt(int n, int i);
/**
 *_sqrt_recursion - prints the square root of n
 *
 *
 *@n: the number
 *
 *
 *Return: the sqr roots
 *
 *
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (-1);
}
return (_f_sqrt(n, 0));
}

int _f_sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
return (_f_sqrt(n, i +1));
}
