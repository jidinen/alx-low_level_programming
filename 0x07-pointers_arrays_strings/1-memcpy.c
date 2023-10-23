#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; n > 0; i--)
{
src[i] = dest[i];
n--;
}
return (dest);
}
