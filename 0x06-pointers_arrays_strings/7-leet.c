#include "main.h"

/**
 *leet - leetcode
 *
 *
 *
 *@x: the string
 *
 *
 *Return: the string
 *
 */

char *leet(char *x)
{
int o, m;
char x1[] = "aAeEoOtTlL";
char x2[] = "4433007711";

for (o = 0; x[o] != '\0'; o++)
{
for (m = 0; m < 10; m++)
{
if (x[o] == x1[m])
{
x[o] = x2[m];
}
}
}
return (x);
}
