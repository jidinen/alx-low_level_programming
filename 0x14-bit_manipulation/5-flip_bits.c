#include <stdio.h>
#include "main.h"

/**
 *flip_bits - function
 *
 *
 *
 *@n: param
 *
 *@m: param
 *
 *
 *Return: 1
 *
 *
 *
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count;
unsigned long int xor;
xor = n ^ m;

count = 0;
while (xor)
{
count += xor & 1;
xor >>= 1;
}

return (count);
}

