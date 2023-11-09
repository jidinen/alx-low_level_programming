#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints values according to specified format.
 * @format: A format string containing format specifiers for values.
 *          'c': char
 *          'i': integer
 *          'f': float
 *          's': string (char *)
 *          Any other characters are ignored.
 * @...: Variable number of arguments corresponding to format specifiers.
 *
 * Description: This function prints values based on the format string
 * using variadic arguments. It supports characters, integers, floats, and
 * strings. If a string is NULL, it prints "(nil)" instead.
 *
 * Example: print_all("c, i, s", 'A', 42, "Hello");
 *          Output: A, 42, Hello
 *
 * Return: No return value.
 */

void print_all(const char * const format, ...)
{
int i = 0;
const char *str;
const char *sep;
va_list mypar;
va_start(mypar, format);
sep = "";
i = 0;
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(mypar, int));
break;
case 'i':
printf("%s%d", sep, va_arg(mypar, int));
break;
case 'f':
printf("%s%f", sep, va_arg(mypar, double));
break;
case 's': {
str = va_arg(mypar, const char*);
if (str != NULL)
{
printf("%s%s", sep, str);
}
else
{
printf("%s(nil)", sep);
}
break;
}
default:

break;
}
sep = ", ";
++i;
}

va_end(mypar);
printf("\n");
}
