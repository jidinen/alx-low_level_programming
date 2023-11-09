#include <stdio.h>
#include <stdarg.h>

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
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list myparams;
unsigned int i;
va_start(myparams, n);

for(i = 0; i < n; i++)
{
const char *string = va_arg(myparams, const char *);
if (string == NULL)
{
printf("(nill)");
}
else 
{
printf("%s", string);
}
if ( i < n -1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(myparams);
printf("\n");
}
