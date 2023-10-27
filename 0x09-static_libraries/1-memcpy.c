#include "main.h"

/**
 *_memcopy : copies n bytes
 *
 *@dest : destination
 *
 *@src: source
 *
 *@n:bytes
 *
 *Return : dest 
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int x;
x = n;
for (; i < x; i--)
{
src[x] = dest[x];
n--;
}
return (dest);
}
