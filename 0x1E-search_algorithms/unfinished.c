#include <stdio.h>
#include "search_algos.h"

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


int binary_search(int *array, size_t size, int value)
{
int L;
int R;
int m;
int i;

L= 0;
R = size - 1;

printf("Searching in array: ");
for (i = L; i < R; i++)
{
printf("%d, ", array[i]);
printf("%d\n", array[i]);
}




while (L <= R)
{
m = L + (R - L)  / 2;

if (array[m] < value)
{
L = m + 1;
}
else if (array[m] > value)
{
R = m - 1;
}
else 
{
return (array[m]);
}
}
return (-1);
}
