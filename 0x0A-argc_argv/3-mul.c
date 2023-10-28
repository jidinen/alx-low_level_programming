#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char* argv[])
{
int i,result;
result = 1;

if (argc == 3)
{
for (i = 1; i < argc; i++)
{
result *= atoi(argv[i]);
}

printf("%d\n", result);
}
else if(argc != 3)
{
printf("Error\n");
return(1);
}
return (0);
}
