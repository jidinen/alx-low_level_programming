#include <stdio.h>

/**
 *get_bit - gets bit at index
 *
 *
 *
 *@n: number
 *
 *@index: the index
 *
 *
 *Return: the bit
 */


#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{


return (-1);
}


mask = 1UL << index;
bit_value = (n & mask) >> index;

return (bit_value);
}
