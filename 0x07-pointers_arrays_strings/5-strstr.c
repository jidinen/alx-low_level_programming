#include "main.h"

/**
 *_strstr - a function that locates a substring..
 *@haystack : param
 *
 *
 *#needle : param
 *
 *Return: finds the first occurrence of the substring needle in the string
 *
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
int c;

while (*haystack)
{
for (c = 0; needle[c] != '\0'; c++)
{
if (*haystack == needle[c])
{
return (needle);
}

}
haystack++;
}
return (0);
}
