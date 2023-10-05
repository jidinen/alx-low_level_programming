#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 *
 * Return: Always 0 (Sucess)
 *
 *
 *
 *
 */
int main(void)
{
char i;
long int a;
long long int b;
int x;
float j;
printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of an int:%lu bytes(s) \n", (unsigned long)sizeof(x));
printf("Size of long int:%lu bytes(s),\n", (unsigned long)sizeof(a));
printf("Size of long long int : %lu bytes(s) \n", (unsigned long)sizeof(b));
printf("Size of float: %lu bytes(s) \n", (unsigned long)sizeof(j));
return (0);
}
