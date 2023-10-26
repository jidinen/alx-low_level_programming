#include "main.h"

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
int i;
int product;
if (n == 1)
{
return (1);
}
for (i = 0; i < n; i++)
{
product = i * i;
if (product == n)
{
return (i);
}
}
if (product < n)
{
return (_sqrt_recursion(n - product));
}
return (-1);
}
