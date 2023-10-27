#include "main.h"

/**
 *_memset - copy n bytes
 *
 *@s: the pointer to the string
 *
 *@b: the character
 *
 *@n: bytes
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
