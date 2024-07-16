#include <stdio.h>
#include "search_algos.h"

/*
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
size_t L;
size_t R;
size_t m;

L = 0;
R = size - 1;

while (L <= R)
{
m = L + R / 2;
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

