#include <stdio.h>

/**
 *linear search - an algorithm that searches for an element in an array
 *
 *
 *@array: pointer to the array
 *
 *@size: size of the array 
 *
 *
 *@value: the target 
 *
 *
 *Return: the value or target or return -1 if not found
 *
 *
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return i;


}
return (-1);
}
