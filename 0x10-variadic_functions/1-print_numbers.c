#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numbers
 *
 *
 *@separator: seperates the numbers
 *
 *
 *@n: numbers of params
 *
 *Return: none
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list myparams;
unsigned int i;
va_start(myparams, n);


for (i = 0; i < n; i++)
{
printf("%d", va_arg(myparams, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);

}
}
va_end(myparams);

printf("\n");

}
