#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *
 *@argc: first
 *
 *@argv: second
 *
 *Return: 0
 *
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
