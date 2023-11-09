#include "variadic_functions.h"
#include <stdarg.h>


/**
 *sum_them_all - sums all the params
 *
 *
 *@n: numbers of params
 *
 *
 *Return: the sum
 *
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
va_list mynums;
int result;
unsigned int i;
result = 0;


va_start(mynums, n);

for (i = 0; i < n; i++)
{
result += va_arg(mynums, int);
}
va_end(mynums);

return (result);
}
