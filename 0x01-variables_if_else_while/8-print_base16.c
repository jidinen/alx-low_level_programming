#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *
 *Return: Always 0 (Success)
 *
 *
 *
 */

int main(void)
{
int hexi = 97;
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
while (hexi <= 102)
{
putchar(hexi);
hexi++;

}
putchar('\n');
return (0);
}
