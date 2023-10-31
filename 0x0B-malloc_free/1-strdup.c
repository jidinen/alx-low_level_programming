#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - copies a string and return a pointer
 *
 *
 *@str: The string to be copied
 *
 *
 *Return: Null if 0, returns the pointer to an address on success
 *
 */

char *_strdup(char *str)
{
int s, i;
char *t;
s = 0;
t = (char *)malloc(s  * sizeof(char));
if (t == NULL)
{
return (NULL);
}
while (str[s] != '\0')
{
s++;
}
t = (char *)malloc((s + 1) * sizeof(char));


for (i = 0; str[i] != '\0'; i++)
{
t[i] = str[i];
}
t[i] = '\0';


return (t);
}
