#include "main.h"


/**
 *_strspn - a function that gets the length of a prefix substring.
 *
 *@s : the params
 *
 *@accept: param
 *
 *Return: Returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
int j;
unsigned long l;

l = 0;
while (*s)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
l++;
break;
}
else if (accept[j + 1] == '\0')
{
return (l);
}
}
s++;
}
return (l);
}

