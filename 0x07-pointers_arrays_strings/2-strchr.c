#include "main.h"
/**
 *_strchr - searches for occurence of a chareacter in a string
 *
 *@s: the string
 *
 *@c : the character
 *
 *
 *Return: the character for success Null for failure
 *
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}

}
return (0);
}
