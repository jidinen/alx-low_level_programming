#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print numbers to 98
 *
 *
 *@n: numbers to be printed
 *
 *
 *Return: Always 0 (Success)
 *
 */



void print_to_98(int n)
{

if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d ,", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}

}
}
if (n <= 98)
{
for (; n >= 0; n--)
{
if (n == 98)
{
printf("%d, ", n);
printf("\n");
break;
}
else
{
printf("%d ,", n);
}
}
}
}
