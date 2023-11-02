#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - Allocates memory using malloc.
 *
 *@b: Number of elements to allocate memory for.
 *
 *Description:This function allocates memory for an array of @b
 *
 *
 *Return:
 *-On success, returns a pointer to the allocated memory block.
 ** - If the allocation fails, the program exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(sizeof(*b));
if (x == NULL)
{


exit(98);
}
free(x);
return (x);
}
