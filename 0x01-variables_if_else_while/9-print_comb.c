#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
int lox = 48;
while (lox < 58)
{

putchar(lox);
lox++;
if (lox != 58)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
