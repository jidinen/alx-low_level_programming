#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - checks for numbers
 *
 *
 *
 *
 *@str: string
 *
 *Return ; 0 & -1
 *
 */








int check_num(char *str)
{
unsigned int i;
while(i < strlen(str))
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (-1);
}

/**
 *main - Entry point
 *
 *
 *@argc; first param
 *
 *@argv: sec
 *
 *
 */

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
while (i < argc)
{
if (check_num(argv[i]))
{
sum += atoi(argv[i]);
}
else 
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n",sum);

return (0);
}
