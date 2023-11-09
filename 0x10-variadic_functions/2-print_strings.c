#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - exactly in the name
 *
 *
 *
 *@separator: param
 *
 *@n: numbers of argument
 *
 *Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list myparams;
unsigned int i;
va_start(myparams, n);

for (i = 0; i < n; i++)
{
const char *string = va_arg(myparams, const char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(myparams);
}
