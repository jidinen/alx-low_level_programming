#include <stdio.h>

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
unsigned long int mask;
unsigned long int bit;
int size;
int i;
size = sizeof(unsigned long int) * 8;


for (i = size - 1; i >= 0; i--)
{
mask = 1UL << i;
bit = (n & mask) >> i;
printf("%01lu", bit);
if (i % 4 == 0) 
{
printf(" ");
}

printf("%lu", bit);

}
 
printf("\n");
}
