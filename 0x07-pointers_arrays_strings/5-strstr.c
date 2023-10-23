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
for (; *haystack != '\0'; haystack++)
{
char *p = haystack;
char *l = needle;
while (*p == *l && *l != '\0')
{
p++;
l++;
}
if (*l == '\0')
{
return (haystack);
}
}
return (0);
}
