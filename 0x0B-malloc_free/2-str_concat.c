#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concanates two strings
 *
 *
 *@s1:first strings
 *@s2:second strings
 *
 *
 *Return: return a pointer to the concanate
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
int i, j, total;
char *t;
j = 0;
i = 0;
total = 0;
while (s1[total] != '\0')
{
total++;
}
while (s2[i] != '\0')
{
total++;
i++;
}
t = (char *)malloc((total + 1) * sizeof(char));
if(s1 == NULL)
{
return (s1);
}
if (s2 == NULL)
{
return (s2);
}
if (t == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
t[i] = s1[i];
}
for (j = '\0'; s2[j] != '\0'; j++)
{
t[i + j] = s2[j];
}
t[i + j] = '\0';
return (t);
}
