#include <unistd.h>
#include "main.h"
/**
 *_putchar - custom putchar function
 *
 *
 *@c: takes one argument of type character
 *
 *Return: writes to the standard output
 *
 *
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
