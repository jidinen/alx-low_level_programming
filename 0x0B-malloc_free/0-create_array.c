#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates a new array
 *
 *@size: size of an of the array
 *
 *@c: the character
 *
 *Return: pointer to the array or 0 for failure
 *
 *
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *newarr;

newarr = (char *) malloc(size + 1 * sizeof(char));
if (newarr == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
newarr[i] = c;
}
newarr[size] = '\0';
return (newarr);
}
