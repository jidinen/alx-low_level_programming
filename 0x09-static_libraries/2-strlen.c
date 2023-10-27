#include "main.h"

/**
 *_strlen - return the length of a string
 *
 *@s: the string
 *
 *
 *Return: the length of the string
 *
 *
 */

int _strlen(char *s)
{
int x, lonx;
x = 0;
lonx = 0;
while (s[x] != '\0')
{
x++;
lonx++;
}
return (lonx);
}
