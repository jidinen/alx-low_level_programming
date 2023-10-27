#include "main.h"

/**
 *puts2 - prints 2
 *
 *
 *
 *@str: strings
 *
 *Return: none
 *
 */

void puts2(char *str)
{
int i;
int j;
char *x = str;
j = 0;
i = 0;
while (*x != '\0')
{
x++;
j++;
}
i = j - 1;
for (j = 0; j <= i; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
