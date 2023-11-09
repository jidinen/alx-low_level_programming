#include <stdio.h>
#include <stdarg.h>



/**
 *print_all - data types
 *
 *
 *@format: specifiers
 *
 *@...: varadic
 *
 *Return: void
 *
 */

void print_all(const char * const format, ...)
{
int i = 0;
va_list mypar;
char  *sep = "";
va_start(mypar, format);
if (format)
{
while (format[i])
{
if (format[i] == 'c')
{
char c = va_arg(mypar, int);
printf("%s%c", sep, c);
}
else if (format[i] == 'i')
{
int i = va_arg(mypar, int);
printf("%s%d", sep, i);
}
else if (format[i] == 'f')
{
float f = va_arg(mypar, double);
printf("%s%f", sep, f);
}
else if (format[i] == 's')
{
const char *str = va_arg(mypar, const char*);

if (str != NULL)
{
printf("%s%s", sep, str);
}
else
{
printf("%s(nil)", sep);
}
}
sep = ", ";
++i;
}
va_end(mypar);
}
printf("\n");
}
