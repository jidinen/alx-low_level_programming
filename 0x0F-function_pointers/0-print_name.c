#include <stdio.h>
#include "fuction_pointer.h"
/**
 *print_name - prints a name
 *
 *
 *
 *@name: param
 *
 *
 *@f: pointer to a function
 *
 *
 *Return: void
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
