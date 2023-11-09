#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>


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

void string_format(va_list mypar)
{
char *stx;
stx = va_arg(mypar, char *);
if (stx == NULL)
{
stx = "(nil)";
}
printf("%s", stx);

}

void char_format(va_list mypar)
{
printf("%c", va_arg(mypar, int));
}

void int_format(va_list mypar)
{
printf("%i", va_arg(mypar, int));
}

void float_format(va_list mypar)
{
printf("%f", va_arg(mypar, double));
}


void print_all(const char *format, ...)
{
va_list mypar;
char *sep;

print_format_t print_format_struct[] = {
{"c", char_format},
{"i", int_format},
{"f", float_format},
{"s", string_format},
{NULL,NULL}
};
int x, y;
sep = "";
va_start(mypar, format);
x = 0; 
while (format != NULL && format[x] != '\0')
{
y = 0;
while (y < 4)
{
if (*print_format_struct[y].c == format[x])
{
printf("%s", sep);
print_format_struct[y].f(mypar, sep);
}
y++;
sep = ", ";
}
x++;
}
printf("\n");
va_end(mypar);
}
