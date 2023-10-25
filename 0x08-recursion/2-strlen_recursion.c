#include "main.h"

/**
 *_strlen_recursion - a function that counts the number of character
 *
 *
 *
 *@s: the string
 *
 *
 *Return:  function calls itself
 *
 *
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}


}
