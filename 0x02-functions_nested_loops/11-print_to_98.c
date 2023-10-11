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
int x;
if (n <= 98)
{
for (x = n; x <= 98; x++)
{
if (x == 98)
{
printf("%d ,", x);
printf("\n");
break;
}
else
{
printf("%d, ", x);
}

}
}
if (n <= 98)
{
for (x = n; x >= 0; x--)
{
if (x == 98)
{
printf("%d, ", x);
printf("\n");
break;
}
else
{
printf("%d ,", x);
}
}
}
}
