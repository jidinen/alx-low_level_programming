#include <stdio.h>

/**
 *set_bit - sets bits
 *
 *
 *
 *
 *@n: param
 *
 *
 *@index: param
 *
 *
 *Return: noee
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}


*n = *n | (1UL << index);
return (1);
}
