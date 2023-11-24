#include <stdio.h>
#include "main.h"

/**
 *clear_bit - function
 *
 *
 *
 *
 *@n: param
 *
 *@index: index
 *
 *
 *Return: n
 *
 *
 *
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
x = ~(1UL << index);

*n = *n & x;

return (1);
}
