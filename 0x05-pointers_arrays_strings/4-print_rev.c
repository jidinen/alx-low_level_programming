#include "main.h"

/**
 *print_rev - prints the string in reverse
 *
 *
 *@s: the string
 *
 *
 *Return : none
 *
 */
void print_rev(char *s)
{
int i, count;
count = 0;
while (*s != '\0')
{
s++;
count++;
}
s--;
for (i = count; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
