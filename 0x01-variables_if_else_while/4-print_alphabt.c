#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *
 *
 *Return: Always 0 (success);
 *
 *
 *
 *
 */

#include <stdio.h>

int main(void)
{
int lowercase = 97;
while (lowercase <= 122)
{
if (lowercase != 101 && lowercase != 113)
{

putchar(lowercase);
}
lowercase++;
}
putchar('\n');
return (0);
}
