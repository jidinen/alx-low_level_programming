#include "main.h"

/**
 *_strpbrk - function locates the first occurrence in the string s
 *
 *@s: the strimg
 *
 *@accept: the occurence
 *
 *Return: a pointer to the byte in s that matches one of the bytes
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
int m;
while (*s)
{
for (m = 0; accept[m] != '\0'; m++)
{
if (*s == accept[m])
{
return (s);
}
}
s++;
}
return (0);
}
