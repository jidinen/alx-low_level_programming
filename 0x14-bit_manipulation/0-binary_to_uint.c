#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts to binary
 *
 *
 *@b: string
 *
 *
 *Return: base10
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result;
result = 0;
while (*b != '\0')
{
if (*b == '0')
{
result <<= 1;
}
else if (*b == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
++b;
}
return (result);
}
