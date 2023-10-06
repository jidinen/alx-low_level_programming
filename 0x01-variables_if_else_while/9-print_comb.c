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
while (lox <= 57)
{

putchar(lox);
putchar(',');
lox++;
putchar(' ');
}
putchar('\n');
return (0);
}
