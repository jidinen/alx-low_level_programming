#include "main.h"

/**
 *_isdigit - checks number 0-9 to check if its a digit
 *
 *
 *@c: the number that has to e checked
 *
 *
 *Return: 0 and 1
 *
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
