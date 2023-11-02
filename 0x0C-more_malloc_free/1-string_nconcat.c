#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concanates two strings
 *
 *
 *@s1: string 1
 *@s2: string 2
 *
 *@n: number of bytes to be copied
 *Return: the previously allocated memory
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int j;
int i;
int m;
char *a;
if (s1 == NULL)
{
s1 = "";
}
if (s1 == NULL)
{
s2 = "";
}
i = 0;
j = 0;
m = 0;
while (s1[m] != '\0')
{
m++;
}
while (s2[i] != '\0')
{
i++;
}
a = malloc(m + n + 1 * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
a[i] = s1[i];
}
for (j = 0; j < n && s2[2] != '\0'; j++)
{
a[i + j] = s2[j];
}
a[i + j] = '\0';

return (a);
}

