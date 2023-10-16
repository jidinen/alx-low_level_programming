#include "main.h"

/**
 *puts_half - prints half the string
 *
 *
 *@str: the string
 *
 *
 *Return: none
 *
 *
 *
 */

void puts_half(char *str)
{
int n;
int midpoint;
int lonx = 0;
for (midpoint = 0; str[midpoint] != '\0'; midpoint++)
{
lonx++;
}
n = (lonx / 2);
if ((lonx % 2) == 1)
{
n = ((lonx + 1) / 2);
}
for (midpoint = n; str[midpoint] != '\0'; midpoint++)
{
_putchar(str[midpoint]);

}
_putchar('\n');
}
