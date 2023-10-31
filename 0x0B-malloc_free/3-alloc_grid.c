#include "main.h"
#include <stdlib.h>


/**
 *alloc_grid - creates a 2dimensional array
 *
 *
 *@width : rows
 *
 *@height : columns
 *
 *Return: x or null for failure
 *
 *
 *
 */


int **alloc_grid(int width, int height)
{
int i;
int **x;
x = (int **)malloc(width * sizeof(int *));
if (width < 0)
{
return (NULL);
}
if (height < 0)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
x[i] = (int *)malloc(height * sizeof(int *));
}
return (x);
}
