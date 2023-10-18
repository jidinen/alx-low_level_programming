#include "main.h"

/**
 *reverse_array - reverses an array
 *
 *
 *
 *@a: the array
 *
 *@n: the size
 *
 *Return: void
 *
 */

void reverse_array(int *a, int n)
{
int i;
int x;
for (i = 0; i < n--; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
