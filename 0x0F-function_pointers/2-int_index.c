
#include <stdio.h>


/**
 *int_index - a function that searches for an integer
 *
 *
 *@array : array param
 *
 *
 *@size: the size of an array
 *@cmp : the function pointer
 *
 *
 *Return: the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return (-1);

for (i = 0; i < size; i++)
{
int value = cmp(array[i]);
if (value)
{
return (i);
}
}
return (-1);
}

