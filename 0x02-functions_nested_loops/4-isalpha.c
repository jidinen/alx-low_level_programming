#include "main.h"

/**
 *_isalpha - checks if a character is uppercase or not
 *
 *
 *@c: The function recieves one argument of type interfer
 *
 *
 *Return: 1 if upper 0 if other wise
 *
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
