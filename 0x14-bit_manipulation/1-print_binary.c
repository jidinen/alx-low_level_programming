#include <stdio.h>

/**
 *print_binary - says it in the name
 *
 *
 *
 *@n: param
 *
 *
 *
 *Return: none
 *
 *
 *
 *
 *
 *
 */
void print_binary(unsigned long int n) 
{
int i;
int num_bits;
unsigned long int bit;
num_bits = sizeof(unsigned long int) * 8;

for (i = num_bits - 1; i >= 0; i--)
{
bit = n & (1UL << i);
printf("%c", bit ? '1' : '0');
}
printf("\n");
}
