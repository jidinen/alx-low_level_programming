#include <stdio.h>




/**
 *array_iterator - a function that executes a function given a.
 *
 *
 *
 *@array: the array
 *
 *@size: the of the array
 *
 *
 *@action: the function to a pointer
 *
 *Return: void
 *
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}

}
